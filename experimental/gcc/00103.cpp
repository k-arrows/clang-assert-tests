// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

template <int N> void foo() {
#pragma omp declare reduction(foo:char : omp_out += omp_in)                    \
    initializer(omp_priv((char)N::))
}

void bar() { &foo<0>; }
