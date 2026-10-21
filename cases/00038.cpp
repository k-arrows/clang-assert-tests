// RUN: clang++ -c %s
// EXPECT-FAIL

void foo(char *buf)
    __attribute__((enable_if(__builtin_object_size(buf, 123) > 4, "")));

void bar(char *buf) {
  foo(buf);
}
