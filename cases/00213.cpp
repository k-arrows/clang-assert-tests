// RUN: clang++ -c -fopenacc %s
// EXPECT-PASS

constexpr char foo() { return 3; }

void bar() {
  int array[5];
#pragma acc parallel private(array[foo() : 1])
  while (1)
    ;
}
