// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DoMemcpy
// EXPECT-CRASH-ASSERT: DestPtr.isBlockPointer

static_assert(__builtin_wmemcpy(L"foobar", L"bazqux", 6), "");
