// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: GenerateReductionInitRecipeExpr
// EXPECT-CRASH-ASSERT: isScalarType

void foo() {
  int i;
  int arr[i + 1];

#pragma acc parallel reduction(& : arr)
  while (1)
    ;
}
