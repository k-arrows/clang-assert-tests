// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

namespace std {
template <typename T> struct S {};
using V = S<char>;
} // namespace std

template <std::size_t N> struct SV : std::V {
  using std::V::V;
};

constexpr auto foo(auto a) { return foo(a); }

constexpr auto a = foo(SV("c"));
