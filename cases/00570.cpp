// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: IntegerLiteral
// EXPECT-CRASH-ASSERT: getBitWidth
// EXPECT-CRASH-ASSERT: correct

void foo(bool b) {
#pragma omp tile sizes(b)
  for (int i = 0; i < 2; i++)
    ;
}
