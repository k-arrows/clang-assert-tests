// RUN: clang++ -c %s
// EXPECT-FAIL

extern int foo __attribute__((alias("")))(123
