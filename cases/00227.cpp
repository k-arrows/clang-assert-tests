// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: TraverseVarTemplateSpecializationDecl
// EXPECT-CRASH-ASSERT: getTemplateSpecializationKind
// EXPECT-CRASH-ASSERT: TSK_ImplicitInstantiation

struct S {
  template <typename T> static T t;
};
template <typename T> T S::t;
float foo = S::t<float>;
