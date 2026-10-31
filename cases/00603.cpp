// RUN: clang++ -fopenmp %s
// EXPECT-CRASH-NOASSERT

struct S {
  S() {}
  int &foo = S().bar;
};
