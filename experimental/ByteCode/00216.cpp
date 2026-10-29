// RUN: clang++ -c -x c -std=c2y -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

__UINT_LEAST32_TYPE__ stdc_load8_aligned_leu32(const unsigned char *);
alignas(8) unsigned char buf[4] = {};

__UINT_LEAST32_TYPE__ foo = stdc_load8_aligned_leu32(buf + 4);
