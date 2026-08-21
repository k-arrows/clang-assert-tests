// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnOMPIteratorExpr
// EXPECT-CRASH-ASSERT: DeclIdent
// EXPECT-CRASH-ASSERT: Identifier

void foo() {
#pragma omp depobj depend(iterator(int))
}
