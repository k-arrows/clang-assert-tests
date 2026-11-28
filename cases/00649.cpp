// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ConsumeToken
// EXPECT-CRASH-ASSERT: isTokenSpecial
// EXPECT-CRASH-ASSERT: Should

template <typename... T> auto foo(T...[0x8000000000000000ULL]);
