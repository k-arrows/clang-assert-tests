// RUN: clang++ -c -x c %s
// EXPECT-FAIL

int A = ;

int B __attribute__() (A, "")
