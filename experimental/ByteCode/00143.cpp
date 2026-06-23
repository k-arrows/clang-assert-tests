// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

static_assert((delete[] (int *)(bool b) new int[2], true), "");
