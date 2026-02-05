// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: interp__builtin_elementwise_abs
// EXPECT-CRASH-ASSERT: isVectorType

void foo() {
  int i[2];
  __builtin_elementwise_abs(&i);
}

void bar = foo();
