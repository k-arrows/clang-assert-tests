// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getString
// EXPECT-CRASH-ASSERT: isUnevaluated
// EXPECT-CRASH-ASSERT: getCharByteWidth
// EXPECT-CRASH-ASSERT: function

int foo() { return __builtin_cpu_supports(U"a") ? 0 : 1; }
