// RUN: clang++ -x c --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

unsigned foo(unsigned x, int t) {
  unsigned tl = x << (t);
  unsigned th = x >> (9999999999999999999uwb - t);
  return tl | th;
}
