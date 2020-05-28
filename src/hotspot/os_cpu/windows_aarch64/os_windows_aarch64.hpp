/*
 * Copyright (c) 1999, 2019, Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2014, Red Hat Inc. All rights reserved.
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

#ifndef OS_CPU_WINDOWS_AARCH64_OS_WINDOWS_AARCH64_HPP
#define OS_CPU_WINDOWS_AARCH64_OS_WINDOWS_AARCH64_HPP

  static void setup_fpu();
  static bool supports_sse();

  //HighRes Timer on Windows: https://docs.microsoft.com/en-us/windows/win32/sysinfo/acquiring-high-resolution-time-stamps
  //static jlong rdtsc();

  static bool is_allocatable(size_t bytes);

  // Atomically copy 64 bits of data
  static void atomic_copy64(const volatile void *src, volatile void *dst) {
    *(jlong *) dst = *(const jlong *) src;
  }

  static int32_t(*atomic_xchg_func)          (int, volatile int*);
  static int64_t(*atomic_xchg_long_func)     (int64_t, volatile int64_t*);

  static int8_t(*atomic_cmpxchg_byte_func)  (int8_t, volatile int8_t*, int8_t);
  static int32_t(*atomic_cmpxchg_func)       (int32_t, volatile int32_t*, int32_t);
  static int64_t(*atomic_cmpxchg_long_func)  (int64_t, volatile int64_t*, int64_t);

  static int32_t(*atomic_add_func)           (int32_t, volatile int32_t*);
  static int64_t(*atomic_add_long_func)      (int64_t, volatile int64_t*);

  static int32_t   atomic_xchg_bootstrap(int32_t, volatile int32_t*);
  static int64_t   atomic_xchg_long_bootstrap(int64_t, volatile int64_t*);

  static int32_t   atomic_cmpxchg_bootstrap(int32_t, volatile int32_t*, int32_t);
  static int8_t    atomic_cmpxchg_byte_bootstrap(int8_t, volatile int8_t*, int8_t);

  static int32_t  atomic_add_bootstrap(int32_t, volatile int32_t*);
  static int64_t  atomic_add_long_bootstrap(int64_t, volatile int64_t*);
  static int64_t atomic_cmpxchg_long_bootstrap(int64_t, volatile int64_t*, int64_t);

#endif // OS_CPU_WINDOWS_AARCH64_OS_WINDOWS_AARCH64_HPP
