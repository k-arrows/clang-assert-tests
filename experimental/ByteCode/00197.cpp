// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: compare
// EXPECT-CRASH-ASSERT: RHS.bitWidth

namespace std {
class partial_ordering {
public:
  unsigned __int128 n;
  static const partial_ordering less, greater, equivalent, unordered;
  constexpr bool operator==(long n) const noexcept { return this->n == n; }
};
constexpr partial_ordering partial_ordering::less = {-1};
constexpr partial_ordering partial_ordering::greater = {1};
constexpr partial_ordering partial_ordering::equivalent = {0};
constexpr partial_ordering partial_ordering::unordered = {-127};
} // namespace std

static_assert(__builtin_nanf("") <=> __builtin_nanf("") == -127, "");
