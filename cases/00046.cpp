// RUN: clang++ -c %s
// EXPECT-FAIL

char isfpclass_pdenorm_0[__builtin_isfpclass(1.0f, 1.0f) ? 1 : -1];
