// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

class C {
public:
  static const float foo;
};

void bar() {
#pragma omp target defaultmap(none : pointer) defaultmap(none : scalar)
#pragma omp parallel lastprivate(C::foo)
  for (int i = 0; i < 2; i++)
    ;
}
