// RUN: clang++ -c -x c -std=c23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: IntegralAP
// EXPECT-CRASH-ASSERT: getNumWords

void foo() { 9999999999999999999wb / 1wbi; }
