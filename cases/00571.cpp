// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isConditionTrue
// EXPECT-CRASH-ASSERT: isConditionDependent
// EXPECT-CRASH-ASSERT: isn't

constexpr void *foo = __builtin_choose_expr(bar(), true, false);
