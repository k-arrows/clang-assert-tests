// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: computeDependence
// EXPECT-CRASH-ASSERT: UnexpandedPack

template <typename... Ts> void foo(Ts... a) { {a ?: 0}; }
