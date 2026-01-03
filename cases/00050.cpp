// RUN: clang++ -c -x c -O1 %s
// EXPECT-CRASH-ASSERT: getAccessTagInfo
// EXPECT-CRASH-ASSERT: isIncomplete
// EXPECT-CRASH-ASSERT: object

extern void FUNC;

void foo() { FUNC; }
