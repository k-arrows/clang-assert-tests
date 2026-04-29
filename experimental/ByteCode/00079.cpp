// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: evaluateAsInitializer
// EXPECT-CRASH-ASSERT: Stk.empty

_Accum acc = (-1e+00r, 2.3);
