// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitVarTemplatePartialSpecializationDecl
// EXPECT-CRASH-ASSERT: empty
// EXPECT-CRASH-ASSERT: nothing

template <typename T> struct A {
  struct B {};
  template <typename U, B V> static int foo;
  template <typename U, B V> static int foo<U *, V>;
};

int A<int>::foo<> = 42;
