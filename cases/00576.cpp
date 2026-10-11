// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

template <class T> void foo() {
  switch (T(0)) {
    for (int i = 0; i < 2; i++) {
    };
#pragma omp for collapse(2)
#pragma omp interchange
    for (int j = 0; j < 2; j++)
      for (int k = 0; k < 2; k++)
        ;
  }
}
