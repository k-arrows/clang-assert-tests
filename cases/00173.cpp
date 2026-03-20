// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: EvaluateAsStringImpl
// EXPECT-CRASH-ASSERT: isUnevaluated
// EXPECT-CRASH-ASSERT: expected

static_assert(true, "";);
