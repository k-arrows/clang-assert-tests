// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: GetOutputAndInputConstraints
// EXPECT-CRASH-ASSERT: IsValid
// EXPECT-CRASH-ASSERT: Failed

int foo() {
  asm goto("" : "r"(0) : "r"(1)::label);
label:
  return 42;
}
