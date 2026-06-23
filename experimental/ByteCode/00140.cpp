// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

static_assert(__builtin_elementwise_ctzg((__int128)42), "");
