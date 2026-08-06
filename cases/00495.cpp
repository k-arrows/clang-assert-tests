// RUN: clang++ -c -x c -O1 %s
// EXPECT-CRASH-NOASSERT

int __attribute__((const)) snprintf(char *, __SIZE_TYPE__, const char *, ...);

long foo(char c, long d) { return snprintf(&c, d, ""); }
