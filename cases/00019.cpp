// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setQualifierLoc
// EXPECT-CRASH-ASSERT: getNestedNameSpecifier
// EXPECT-CRASH-ASSERT: getQualifier

enum E {};
struct S {
  struct T;
};
struct S::T {
} E s;
