// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  int &a;
  constexpr S(int &foo) : a(a) {}
  constexpr ~S() { ++a; }
};

constexpr int bar() {
  int a = 0;
  int b = 41;
  if (S{a}; true) {
    b += a;
  }
  return b;
}

static_assert(bar() == 42, "");
