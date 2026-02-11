// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  int i[2];
  __builtin_elementwise_abs(&i);
}

void bar = foo();
