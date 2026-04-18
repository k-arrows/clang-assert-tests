// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: operator+=
// EXPECT-CRASH-ASSERT: BitWidth
// EXPECT-CRASH-ASSERT: widths

constexpr char foo() { return 3; }

void bar() {
  int array[5];
#pragma acc parallel private(array[foo() : 1])
  while (1)
    ;
}
