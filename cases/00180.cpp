// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

typedef __SIZE_TYPE__ size_t;

extern char *strnlen(const char *, size_t);

char **q;

void foo(const char *s) { q[3] = strnlen(s, 7); }
