// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
#pragma omp taskloop
  for (struct S {
         S *s{};
         void bar() {
           for (;;)
             ;
         }
       })
}
