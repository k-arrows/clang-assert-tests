// RUN: clang++ -c -x objective-c++ -fopenacc %s
// EXPECT-FAIL

void foo() {
  typename<> bar;
#pragma acc parallel reduction(max : bar)
  ;
}
