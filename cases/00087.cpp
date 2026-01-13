// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: SubstQualifier
// EXPECT-CRASH-ASSERT: getFriendObjectKind
// EXPECT-CRASH-ASSERT: isDependentContext
// EXPECT-CRASH-ASSERT: non-friend

template <class T> void foo(T x) {
  struct S {
    static int *s;
  };
  int *S::s = 0;
}

void bar() { foo(0); }
