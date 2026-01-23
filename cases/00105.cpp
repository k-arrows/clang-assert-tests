// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: skipRValueSubobjectAdjustments
// EXPECT-CRASH-ASSERT: ME
// EXPECT-CRASH-ASSERT: getAsRecordDecl

struct S {};
struct {
  int &&a;
};

S &s = static_cast<S &>(a);
