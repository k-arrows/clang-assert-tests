// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: InitializeFrom
// EXPECT-CRASH-ASSERT: Initializer
// EXPECT-CRASH-ASSERT: non-null

int A = ;

int B __attribute__() (A, "")
