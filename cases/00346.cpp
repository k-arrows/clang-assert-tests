// RUN: clang++ -fopenmp --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

void foo() {
#pragma omp parallel for
  for (int i = {0}; i < 2; i++)
    ;
}
