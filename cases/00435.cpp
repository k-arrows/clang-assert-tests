// RUN: clang++ -c -std=c++2c -fopenmp %s
// EXPECT-CRASH-ASSERT: addHiddenDecl
// EXPECT-CRASH-ASSERT: getLexicalDeclContext
// EXPECT-CRASH-ASSERT: inserted

void foo() {
  template for (auto x : {1, 2}) {
#pragma omp simd
    for (int i = 0; i < 2; i++)
      ;
  }
}
