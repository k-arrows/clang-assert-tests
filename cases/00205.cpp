// RUN: clang++ -c -ffixed-point %s
// EXPECT-CRASH-ASSERT: GetFixedPointRank
// EXPECT-CRASH-ASSERT: BTy
// EXPECT-CRASH-ASSERT: Expected

#define test(e, t) _Generic (e, default : 0, t : 1)

void foo (_Fract int ci)
{
  _BitInt(__SIZEOF_INT__ * __CHAR_BIT__ - 1) bi = 0;
  static_assert (test (ci + bi, _Complex int));
}
