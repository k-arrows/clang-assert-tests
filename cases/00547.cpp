// RUN: clang++ -c -fopenmp -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPDeclareReductionType
// EXPECT-CRASH-ASSERT: ParsedType

struct foo {};

template <typename T> struct S : T {
  virtual void bar() {
#pragma omp declare reduction(foo:baz : omp_out)
  }
};

S<foo> s;
