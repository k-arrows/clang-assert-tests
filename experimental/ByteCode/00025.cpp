// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr char abc[] = /* missing */;

static_assert(__builtin_bcmp(abc, abc, 2) == 0);
