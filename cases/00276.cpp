// RUN: clang++ -fopenmp --analyze %s
// EXPECT-CRASH-ASSERT: isInitializationOfVar
// EXPECT-CRASH-ASSERT: IsLocalStaticOrLocalExtern
// EXPECT-CRASH-ASSERT: without

void foo(int *in, int size, int *out) {
#pragma omp for
  for (int i = 0; i < size; i++)
    out[0] += in[i];
}

void bar() {
  int *arr = new int[2];
  int res = 0;
  foo(arr, 2, &res);
}
