// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPLoopnest
// EXPECT-CRASH-ASSERT: isOpenMPLoopTransformationDirective
// EXPECT-CRASH-ASSERT: expected

void foo() {
#pragma omp for
#pragma omp taskwait
}
