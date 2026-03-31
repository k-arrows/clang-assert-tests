// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: peek
// EXPECT-CRASH-ASSERT: empty

struct A {
  int n;
};
struct B {
  int n;
};
struct C : A, B {};
const A &&a = (C &&)(A());
