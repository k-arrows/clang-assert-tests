// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: isReferenceToNonConstCapture
// EXPECT-CRASH-ASSERT: hasLocalStorage
// EXPECT-CRASH-ASSERT: non-local

int i;

void foo() {
#pragma omp parallel firstprivate(i)
  [=]() -> int { return i++; }();
}
