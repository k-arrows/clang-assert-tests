// RUN: clang++ -c %s
// EXPECT-FAIL

void operator delete(void *, void);
