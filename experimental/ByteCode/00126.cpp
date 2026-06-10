// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

auto foo = *(_Complex double *)&(float[2]){};
