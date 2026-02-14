// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr bool foo() {
  struct A {};
  A a;
  a.~A(__builtin_popcountg == 0, "");

  return true;
}
