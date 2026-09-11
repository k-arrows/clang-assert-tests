// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr char foo[] = bar;
static_assert(__builtin_strcmp(foo, "bar") == 0);
