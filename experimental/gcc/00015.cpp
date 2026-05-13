// RUN: clang++ -c %s
// EXPECT-FAIL

int (*a)(long);
int foo(const void);
int bar = (int (*)(long))foo;
