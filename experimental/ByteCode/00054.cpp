// RUN: clang++ -c -x c -std=c23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: EvaluateKnownConstIntCheckOverflow
// EXPECT-CRASH-ASSERT: Result
// EXPECT-CRASH-ASSERT: Could

__attribute__((weak)) constexpr unsigned int bar = 42;
char foo[bar];
