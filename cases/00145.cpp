// RUN: clang++ -c %s
// EXPECT-PASS

struct S {
  unsigned int a : 0400000;
} s;
