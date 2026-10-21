// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

static_assert(__builtin_wmemcpy(L"foobar", L"bazqux", 6), "");
