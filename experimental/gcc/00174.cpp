// RUN: clang++ -c %s
// EXPECT-PASS

int foo(int n) {
  typedef double(T)[n];
  return []() -> int { return sizeof(T); }();
}
