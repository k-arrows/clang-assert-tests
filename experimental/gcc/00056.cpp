// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename... T>
int foo(T... args, const char *fmt, ...)
    [[gnu::format(printf, sizeof...(T), int)]];

int bar = foo<>("%f", 1);
