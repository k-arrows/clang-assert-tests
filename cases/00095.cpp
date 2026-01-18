// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: HandleSelectModifier
// EXPECT-CRASH-ASSERT: ArgumentEnd
// EXPECT-CRASH-ASSERT: Value
// EXPECT-CRASH-ASSERT: larger

void foo() {
#pragma omp atomic update
  foo++;
}
