// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

static_assert(!__builtin_is_aligned(&"", 4), "");
