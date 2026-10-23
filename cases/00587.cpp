// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isZeroSize
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: incomplete

template <class T> struct S {};

template <typename T> void foo() {
  S<struct SS>{SS()};
  struct S2 : SS {
    [[no_unique_address]] SS ss;
  } s;
}

void bar { foo<int>(); }
