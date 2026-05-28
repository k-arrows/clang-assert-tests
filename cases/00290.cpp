// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

void foo() {
  int i;
  int arr[i + 1];

#pragma acc parallel reduction(& : arr)
  while (1)
    ;
}
