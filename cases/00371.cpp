// RUN: clang++ --analyze -fopenmp %s
// EXPECT-CRASH-ASSERT: VisitGCCAsmStmt
// EXPECT-CRASH-ASSERT: NonLoc

void foo() { asm volatile("" : "+f"(__LINE__)); }
