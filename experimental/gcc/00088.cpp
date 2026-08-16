// RUN: clang++ -c %s
// EXPECT-PASS

int foo[2];
__attribute__((may_alias)) auto [i, j] = foo;
