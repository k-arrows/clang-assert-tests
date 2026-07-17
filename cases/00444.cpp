// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: NestedNameSpecifier
// EXPECT-CRASH-ASSERT: PK.Ptr
// EXPECT-CRASH-ASSERT: nullptr

inline namespace S {
namespace std {
class strong_ordering {};
} // namespace std
constexpr int i = (1 <=> 1);
} // namespace S
