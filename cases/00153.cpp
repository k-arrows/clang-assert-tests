// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateTemporary
// EXPECT-CRASH-ASSERT: isPRValue
// EXPECT-CRASH-ASSERT: isRecordType

typedef int I;

void foo() { (int().I::~I, 42); }
