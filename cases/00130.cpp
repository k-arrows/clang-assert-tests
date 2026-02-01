// RUN: clang++ -c -g %s
// EXPECT-CRASH-ASSERT: UnwrapTypeForDebugInfo
// EXPECT-CRASH-ASSERT: isNull
// EXPECT-CRASH-ASSERT: Undeduced

template <int i, class T> T foo();

template <> auto foo<42>() {}
