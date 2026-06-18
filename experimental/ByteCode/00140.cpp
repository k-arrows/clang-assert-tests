// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copy
// EXPECT-CRASH-ASSERT: V.getBitWidth

static_assert(__builtin_elementwise_ctzg((__int128)42), "");
