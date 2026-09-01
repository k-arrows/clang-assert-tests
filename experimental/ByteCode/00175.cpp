// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSize
// EXPECT-CRASH-ASSERT: isUnknownSizeArray

constexpr char foo[] = bar;
static_assert(__builtin_strcmp(foo, "bar") == 0);
