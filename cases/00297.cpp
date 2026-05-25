// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: isCompleteDefinition
// EXPECT-CRASH-ASSERT: Cannot

struct S {
  ~S() {}
  bool b;
  void foo(S b) __attribute__((enable_if(b.b, "")));
}
