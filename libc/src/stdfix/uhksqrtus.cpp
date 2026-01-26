//===-- Implementation of uhksqrtus function ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "uhksqrtus.h"
#include "src/__support/common.h"
#include "src/__support/math/sqrti.h"

namespace LIBC_NAMESPACE_DECL {

LLVM_LIBC_FUNCTION(unsigned short accum, uhksqrtus, (unsigned short x)) {
#ifdef LIBC_FAST_MATH
  return math::sqrti_fast(x);
#else
  return math::sqrti(x);
#endif
}

} // namespace LIBC_NAMESPACE_DECL
