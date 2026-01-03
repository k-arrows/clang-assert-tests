// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: Cannot

enum E { e };

enum E foo(struct A {
  struct S {
  } s1;
  struct S {
  } s2;
}) {}
