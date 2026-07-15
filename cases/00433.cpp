// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnEndOfTranslationUnit
// EXPECT-CRASH-ASSERT: DelayedEquivalentExceptionSpecChecks

struct S {};
struct SS {
  template <typename T, typename U> void foo(T, U *) noexcept(0);
  template <> void foo(S, int *);
  template <> void foo(S, int *);
};
