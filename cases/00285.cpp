// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: FindInstantiatedDecl
// EXPECT-CRASH-ASSERT: getTemplateSpecializationKind
// EXPECT-CRASH-ASSERT: TSK_ExplicitSpecialization

template <typename T> int foo() {
  enum E : int;
  enum E : int { e };
  E x = e;
  return x;
}

int i = foo<int>();
