//===-- Implementation header for sqrti -------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC___SUPPORT_MATH_SQRTI_H
#define LLVM_LIBC_SRC___SUPPORT_MATH_SQRTI_H

#include "include/llvm-libc-macros/stdfix-macros.h"

#ifdef LIBC_COMPILER_HAS_FIXED_POINT

#include "src/__support/fixed_point/sqrt.h"
#include "src/__support/macros/config.h"

namespace LIBC_NAMESPACE_DECL {

namespace math {

// Integer square root - Accurate version:
// Absolute errors < 2^(-fraction length).
template <typename T> LIBC_INLINE constexpr auto sqrti(T x) {
  return fixed_point::isqrt(x);
}

// Integer square root - Fast but less accurate version:
// Relative errors < 2^(-fraction length).
template <typename T> LIBC_INLINE constexpr auto sqrti_fast(T x) {
  return fixed_point::isqrt_fast(x);
}

} // namespace math

} // namespace LIBC_NAMESPACE_DECL

#endif // LIBC_COMPILER_HAS_FIXED_POINT

#endif // LLVM_LIBC_SRC___SUPPORT_MATH_SQRTI_H
