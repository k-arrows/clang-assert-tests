// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

using size_t = unsigned long long;

void foo() {
  auto cond = [=](size_t ix) { return true ? ix != 0 : ix < 42; };
#pragma omp teams distribute
  for (size_t i = 0UL; cond(i); i++)
    ;
}

void bar() { foo(); }
