// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: BuildBinOp
// EXPECT-CRASH-ASSERT: containsErrors
// EXPECT-CRASH-ASSERT: error-recovery

enum { E = foo(bar), F = E + 1 };
