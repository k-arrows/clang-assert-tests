// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: BuildCallExpr
// EXPECT-CRASH-ASSERT: containsErrors
// EXPECT-CRASH-ASSERT: error-recovery

void foo(void) {
  ^(void)__attribute__((noreturn)) {
    return __c11_atomic_fetch_and(0, 42, bar);
  }
  ();
}
