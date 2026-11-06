// RUN: clang++ -c -x objective-c++ -fopenacc %s
// EXPECT-CRASH-ASSERT: IntegerLiteral
// EXPECT-CRASH-ASSERT: isIntegerType
// EXPECT-CRASH-ASSERT: Illegal

void foo() {
  typename<> bar;
#pragma acc parallel reduction(max : bar)
  ;
}
