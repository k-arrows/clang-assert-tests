// RUN: clang++ -x c --analyze %s
// EXPECT-CRASH-ASSERT: getExtValue
// EXPECT-CRASH-ASSERT: isRepresentableByInt64
// EXPECT-CRASH-ASSERT: int64_t

unsigned foo(unsigned x, int t) {
  unsigned tl = x << (t);
  unsigned th = x >> (9999999999999999999uwb - t);
  return tl | th;
}
