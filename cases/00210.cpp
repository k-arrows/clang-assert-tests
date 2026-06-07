// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};
using F = decltype([](auto val)
__attribute__((section("foo"))) const S s{};
__attribute__((section("foo"))) int i{};
