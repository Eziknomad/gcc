/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fdump-rtl-expand-details" } */

#include "../vec_sat_arith.h"

DEF_VEC_SAT_S_TRUNC_FMT_8(int8_t, int64_t, INT8_MIN, INT8_MAX)

/* { dg-final { scan-rtl-dump-times ".SAT_TRUNC " 2 "expand" } } */
/* { dg-final { scan-assembler-times {vnclip\.wi} 3 } } */
