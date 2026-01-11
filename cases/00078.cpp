// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: RebuildUnresolvedUsingType
// EXPECT-CRASH-ASSERT: hasSameType
// EXPECT-CRASH-ASSERT: mismatched

struct S1 {
  typedef foo type;
};
struct S2 {
  typedef double type;
};

template <typename... T> struct FOO : T... {
  using typename T::type...;
  void f() { type value; }
};

template struct FOO<S1, S2>;
