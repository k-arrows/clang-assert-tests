// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckFunctionDeclaration
// EXPECT-CRASH-ASSERT: isVariablyModifiedType
// EXPECT-CRASH-ASSERT: handled

template <typename T> int foo(T t) {
  typedef double (*bar)[t[0][0]];
  bar baz(void);
  return 0;
}

int qux(char **c) { return foo(c); }
