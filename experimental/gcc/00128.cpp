// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  char32_t i;
  auto operator<=>(int x) const { return i <= x; }
};

#define assert(X) static_assert((X), #X)

template <class T> void foo() {
  S s{42};
  int s1 = 42;
  assert(s1 <= s);
}
