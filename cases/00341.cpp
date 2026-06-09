// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getSExtValue
// EXPECT-CRASH-ASSERT: getSignificantBits
// EXPECT-CRASH-ASSERT: int64_t

enum F { e = (__int128)-1 };

constexpr int foo() {
  F f = (F)(__int128)1e19;
  return (int)f;
}

static_assert(foo() == 1e19, "");
