// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

static_assert(!__builtin_is_aligned(&"", 4), "");
