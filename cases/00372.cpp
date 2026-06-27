// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: VisitBinaryOperator
// EXPECT-CRASH-ASSERT: getTypePtr
// EXPECT-CRASH-ASSERT: Either

struct S {
  int i;
  int p[2];
};

struct SS {
  struct S *s;
  void foo() {
#pragma omp target update from(*(this->s->i + this->s->p))
  }
};
