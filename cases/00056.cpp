// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: CheckForConstantInitializer
// EXPECT-CRASH-ASSERT: containsErrors
// EXPECT-CRASH-ASSERT: error-recovery

char *a = _Generic("", char (*)[f(x)]: "");
