// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

static_assert((delete[] (new int[(new int[42], true)]), true));
