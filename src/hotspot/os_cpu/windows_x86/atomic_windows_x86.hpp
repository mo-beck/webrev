/*
 * Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef OS_CPU_WINDOWS_X86_ATOMIC_WINDOWS_X86_HPP
#define OS_CPU_WINDOWS_X86_ATOMIC_WINDOWS_X86_HPP

#include <intrin.h>
#include "runtime/os.hpp"

// Note that in MSVC, volatile memory accesses are explicitly
// guaranteed to have acquire release semantics (w.r.t. compiler
// reordering) and therefore does not even need a compiler barrier
// for normal acquire release accesses. And all generalized
// bound calls like release_store go through Atomic::load
// and Atomic::store which do volatile memory accesses.
template<> inline void ScopedFence<X_ACQUIRE>::postfix()       { }
template<> inline void ScopedFence<RELEASE_X>::prefix()        { }
template<> inline void ScopedFence<RELEASE_X_FENCE>::prefix()  { }
template<> inline void ScopedFence<RELEASE_X_FENCE>::postfix() { OrderAccess::fence(); }

// The following alternative implementations are needed because
// Windows 95 doesn't support (some of) the corresponding Windows NT
// calls. Furthermore, these versions allow inlining in the caller.
// (More precisely: The documentation for InterlockedExchange says
// it is supported for Windows 95. However, when single-stepping
// through the assembly code we cannot step into the routine and
// when looking at the routine address we see only garbage code.
// Better safe then sorry!). Was bug 7/31/98 (gri).
//
// Performance note: On uniprocessors, the 'lock' prefixes are not
// necessary (and expensive). We should generate separate cases if
// this becomes a performance problem.


template<size_t byte_size>
struct Atomic::PlatformAdd
  : Atomic::AddAndFetch<Atomic::PlatformAdd<byte_size> >
{
  template<typename D, typename I>
  D add_and_fetch(D volatile* dest, I add_value, atomic_memory_order order) const;
};


#define DEFINE_STUB_ADD(ByteSize, StubType, StubName)                     \
  template<>                                                              \
  template<typename D, typename I>                                        \
  inline D Atomic::PlatformAdd<ByteSize>::add_and_fetch(D volatile* dest, \
                                                        I add_value,      \
                                                        atomic_memory_order order) const { \
    STATIC_ASSERT(ByteSize == sizeof(D));                                 \
    return PrimitiveConversions::cast<D>(                                 \
      StubName(reinterpret_cast<StubType volatile *>(dest),               \
               PrimitiveConversions::cast<StubType>(add_value)));         \
  }

DEFINE_STUB_ADD(4, long,    InterlockedAdd)
DEFINE_STUB_ADD(8, __int64, InterlockedAdd64)

#undef DEFINE_STUB_ADD

#define DEFINE_STUB_XCHG(ByteSize, StubType, StubName)                  \
  template<>                                                            \
  template<typename T>                                                  \
  inline T Atomic::PlatformXchg<ByteSize>::operator()(T volatile* dest, \
                                                      T exchange_value, \
                                                      atomic_memory_order order) const { \
    STATIC_ASSERT(ByteSize == sizeof(T));                               \
    return PrimitiveConversions::cast<T>(                               \
      StubName(reinterpret_cast<StubType volatile *>(dest),             \
               PrimitiveConversions::cast<StubType>(exchange_value)));  \
  }

DEFINE_STUB_XCHG(4, long,    InterlockedExchange)
DEFINE_STUB_XCHG(8, __int64, InterlockedExchange64)

#undef DEFINE_STUB_XCHG

#define DEFINE_STUB_CMPXCHG(ByteSize, StubType, StubName)                  \
  template<>                                                               \
  template<typename T>                                                     \
  inline T Atomic::PlatformCmpxchg<ByteSize>::operator()(T volatile* dest, \
                                                         T compare_value,  \
                                                         T exchange_value, \
                                                         atomic_memory_order order) const { \
    STATIC_ASSERT(ByteSize == sizeof(T));                                  \
    return PrimitiveConversions::cast<T>(                                  \
      StubName(reinterpret_cast<StubType volatile *>(dest),                \
               PrimitiveConversions::cast<StubType>(exchange_value),       \
               PrimitiveConversions::cast<StubType>(compare_value)));      \
  }

DEFINE_STUB_CMPXCHG(1, char,    _InterlockedCompareExchange8) // Use the intrinsic as InterlockedCompareExchange8 does not exist
DEFINE_STUB_CMPXCHG(4, long,    InterlockedCompareExchange)
DEFINE_STUB_CMPXCHG(8, __int64, InterlockedCompareExchange64)

#undef DEFINE_STUB_CMPXCHG


#ifndef AMD64

#pragma warning(disable: 4035) // Disables warnings reporting missing return statement

template<>
template<typename T>
inline T Atomic::PlatformLoad<8>::operator()(T const volatile* src) const {
  STATIC_ASSERT(8 == sizeof(T));
  volatile T dest;
  volatile T* pdest = &dest;
  __asm {
    mov eax, src
    fild     qword ptr [eax]
    mov eax, pdest
    fistp    qword ptr [eax]
  }
  return dest;
}

template<>
template<typename T>
inline void Atomic::PlatformStore<8>::operator()(T volatile* dest,
                                                 T store_value) const {
  STATIC_ASSERT(8 == sizeof(T));
  volatile T* src = &store_value;
  __asm {
    mov eax, src
    fild     qword ptr [eax]
    mov eax, dest
    fistp    qword ptr [eax]
  }
}

#pragma warning(default: 4035) // Enables warnings reporting missing return statement

template<>
struct Atomic::PlatformOrderedStore<1, RELEASE_X_FENCE>
{
  template <typename T>
  void operator()(volatile T* p, T v) const {
    __asm {
      mov edx, p;
      mov al, v;
      xchg al, byte ptr [edx];
    }
  }
};

template<>
struct Atomic::PlatformOrderedStore<2, RELEASE_X_FENCE>
{
  template <typename T>
  void operator()(volatile T* p, T v) const {
    __asm {
      mov edx, p;
      mov ax, v;
      xchg ax, word ptr [edx];
    }
  }
};

template<>
struct Atomic::PlatformOrderedStore<4, RELEASE_X_FENCE>
{
  template <typename T>
  void operator()(volatile T* p, T v) const {
    __asm {
      mov edx, p;
      mov eax, v;
      xchg eax, dword ptr [edx];
    }
  }
};
#endif // AMD64

#endif // OS_CPU_WINDOWS_X86_ATOMIC_WINDOWS_X86_HPP
