// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

constexpr bool foo() {
  struct A {};
  A a;
  a.~A(__builtin_popcountg == 0, "");

  return true;
}
