// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseLexedMethodDeclaration
// EXPECT-CRASH-ASSERT: hasUnparsedDefaultArg

class A {
  template <typename T> void foo(T t = []);
  template <> void foo(A a);
};
