// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitFunctionDecl
// EXPECT-CRASH-ASSERT: isFriend
// EXPECT-CRASH-ASSERT: dependent
// EXPECT-CRASH-ASSERT: non-member

template <int A> struct B {
  template <typename T> struct S {};
  template <typename T> S(T) -> S<T>;
  template <> S(int) -> S<int>;
};

template struct B<42>;
