// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: CheckConditionalOperands 
// EXPECT-CRASH-ASSERT: containsErrors
// EXPECT-CRASH-ASSERT: error-recovery

#define CHECK(cst, type) cst##_check = 1 ? (type *)0 : cst;

enum E { e = (alignof(struct S)), CHECK(e, int) };
