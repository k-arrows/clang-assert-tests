// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

struct A {};
struct B : A {};
struct C : B {
  static constexpr C *c = 0;
  static constexpr A *a = c;
};
