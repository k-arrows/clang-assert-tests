// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

static_assert(0.0k == (__int128)0.0k);
