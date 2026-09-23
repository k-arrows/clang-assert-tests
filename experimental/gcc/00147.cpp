// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

class C {
  static void foo();
#pragma omp declare variant(foo) match(construct = {dispatch})                 \
    append_args(interop(target))
  void bar();
};
