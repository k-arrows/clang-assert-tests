// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: isCompleteDefinition
// EXPECT-CRASH-ASSERT: Cannot

template <typename A, typename B> struct S {
  static A a;
  static constexpr B *p = &a;
  int foo[p];
};

struct W {};

struct Z : W {
  S<Z, W> s;
};
