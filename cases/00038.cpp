// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitBuiltinCallExpr
// EXPECT-CRASH-ASSERT: Type
// EXPECT-CRASH-ASSERT: unexpected

void foo(char *buf)
    __attribute__((enable_if(__builtin_object_size(buf, 123) > 4, "")));

void bar(char *buf) {
  foo(buf);
}
