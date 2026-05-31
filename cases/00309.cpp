// RUN: clang++ -c -fdelayed-template-parsing %s
// EXPECT-CRASH-ASSERT: InstantiateFunctionDefinition
// EXPECT-CRASH-ASSERT: isDefaulted
// EXPECT-CRASH-ASSERT: hasSkippedBody
// EXPECT-CRASH-ASSERT: unexpected

template <class T> struct A {
  A() : foo;
  namespace N {
  struct S;
  }
  A<N::S> a;
}
