// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

class C {
} c;

void foo() {
  C &c2 = c;
#pragma omp scope private(c2, c)
  ;
}
