// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitVarTemplatePartialSpecializationDecl
// EXPECT-CRASH-ASSERT: empty
// EXPECT-CRASH-ASSERT: nothing

template <typename> struct S {
  template <typename, typename> __forceinline auto var = 1;
  template <typename T> inline auto var<int, T> = 2;
};

int i = S<int>::var<int, int>;
