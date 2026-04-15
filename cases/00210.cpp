// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getName
// EXPECT-CRASH-ASSERT: isIdentifier
// EXPECT-CRASH-ASSERT: simple

struct S {};
using F = decltype([](auto val)
__attribute__((section("foo"))) const S s{};
__attribute__((section("foo"))) int i{};
