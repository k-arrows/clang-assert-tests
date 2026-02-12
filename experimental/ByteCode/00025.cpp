// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSize
// EXPECT-CRASH-ASSERT: isUnknownSizeArray
// EXPECT-CRASH-ASSERT: unknown

constexpr char abc[] = /* missing */;

static_assert(__builtin_bcmp(abc, abc, 2) == 0);
