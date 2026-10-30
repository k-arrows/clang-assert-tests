// RUN: clang++ -c -target ve %s
// EXPECT-CRASH-ASSERT: getRegParmMax
// EXPECT-CRASH-ASSERT: larger

int __attribute__((regparm(1))) foo();
