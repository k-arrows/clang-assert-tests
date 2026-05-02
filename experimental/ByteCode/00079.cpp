// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

_Accum acc = (-1e+00r, 2.3);
