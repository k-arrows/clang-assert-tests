// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

static_assert((delete[] (new int[(new int[42], true)]), true));
