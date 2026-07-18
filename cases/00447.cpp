// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: AddDeferredMethodTemplateCandidate
// EXPECT-CRASH-ASSERT: CXXConstructorDecl

class C {
  template <typename T> C(C &c) {}
};

void foo() {
  C c;
  c.C::C();
}
