// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator<<=
// EXPECT-CRASH-ASSERT: ShiftAmt
// EXPECT-CRASH-ASSERT: Invalid

enum F { e = (unsigned __int128)-1 };

constexpr int foo() {
  F f = (F)42;
  return f;
}

static_assert(foo() == 42, "");
