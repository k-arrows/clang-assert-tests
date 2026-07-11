// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckBaseSpecifier
// EXPECT-CRASH-ASSERT: BaseDecl
// EXPECT-CRASH-ASSERT: incomplete

class A {
  template <typename T> struct S1;
  template <typename T>
  template <typename I>
  struct S1<T>::S2 : S1<T> void foo();
};
