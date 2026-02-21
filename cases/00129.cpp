// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-FAIL

constexpr int *foo = 0.0L;
