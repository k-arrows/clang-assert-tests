// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

constexpr __int128 i = 42;
static_assert(i == 42.0k);
