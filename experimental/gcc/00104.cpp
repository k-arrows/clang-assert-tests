// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

#include <iostream>

namespace std {
struct S {};
constexpr void foo(S __tag, tuple __msg) {}
} // namespace std

consteval { std::foo("bar", "baz"); }
