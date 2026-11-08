// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

template <class T> struct S {
  static T foo;
#pragma omp threadprivate(foo)
};

void foo(class C) { S<C> s; }
