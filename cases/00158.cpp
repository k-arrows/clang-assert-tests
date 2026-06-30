// RUN: clang++ -c -x c %s
// EXPECT-PASS

_Atomic __auto_type foo = 42;
