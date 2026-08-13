// RUN: clang++ -c -std=c++23 %s
// EXPECT-PASS

struct S {
  ~S() {}
};
struct T : S {};
struct U {
  constexpr ~U() = default;
  T t;
};
