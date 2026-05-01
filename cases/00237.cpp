// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildDecltypeType
// EXPECT-CRASH-ASSERT: hasPlaceholderType
// EXPECT-CRASH-ASSERT: unexpected

static_assert(is_const < decltype(__builtin_elementwise_atan22<>), "");
