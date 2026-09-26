// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckFunctionDeclaration
// EXPECT-CRASH-ASSERT: NewTemplateDecl
// EXPECT-CRASH-ASSERT: non-template

template <int I> struct S {
  template <class C> friend int main() { return I; }
};

template struct S<42>;

int main() {}
