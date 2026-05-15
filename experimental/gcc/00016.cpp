// RUN: clang++ -c %s
// EXPECT-FAIL

template <int I> float foo() {
  return (
      { static_assert(__builtin_stdc_trailing_ones(0xFFFFFFFF) == 32, ""); });
}
