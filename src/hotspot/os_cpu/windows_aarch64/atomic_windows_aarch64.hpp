/*
 * Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2014, 2019, Red Hat Inc. All rights reserved.
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

#ifndef OS_CPU_WINDOWS_AARCH64_ATOMIC_WINDOWS_AARCH64_HPP
#define OS_CPU_WINDOWS_AARCH64_ATOMIC_WINDOWS_AARCH64_HPP

#include <intrin.h>
#include "runtime/os.hpp"
#include "runtime/vm_version.hpp"


// As per atomic.hpp all read-modify-write operations have to provide two-way
// barriers semantics. The memory_order parameter is ignored - we always provide
// the strongest/most-conservative ordering
//
// For AARCH64 we add explicit barriers in the stubs.

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

#endif // OS_CPU_WINDOWS_AARCH64_ATOMIC_WINDOWS_AARCH64_HPP
