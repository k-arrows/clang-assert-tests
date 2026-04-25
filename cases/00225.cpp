// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getExtValue
// EXPECT-CRASH-ASSERT: isRepresentableByInt64
// EXPECT-CRASH-ASSERT: int64_t

constexpr int foo(auto... p) { return p...[0xffffffffffffffff]; }
