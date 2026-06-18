// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: DiagnoseBadDeduction
// EXPECT-CRASH-ASSERT: ParamD
// EXPECT-CRASH-ASSERT: parameter

template <typename... Ts>
void foo(Ts... [[carries_dependency]]) {}

template void foo(float);
