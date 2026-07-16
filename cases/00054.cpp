// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

struct T {
  T(int x) : t(x) {}
};

struct U : public T, public S {
  constexpr U() : S() {}
};
