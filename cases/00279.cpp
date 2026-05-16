// RUN: clang++ -c -std=c++03 %s
// EXPECT-CRASH-ASSERT: Diagnose
// EXPECT-CRASH-ASSERT: InitializationKind
// EXPECT-CRASH-ASSERT: isReferenceType

struct S {};
struct SS {
  S &s;
};

void foo() { bar = new SS(); }
