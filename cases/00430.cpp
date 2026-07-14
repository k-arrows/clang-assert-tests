// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: setMemberSpecialization
// EXPECT-CRASH-ASSERT: InstantiatedFromMember
// EXPECT-CRASH-ASSERT: Only

template<typename T> struct S {};

template<>
template<typename U, bool V> requires V
constexpr int S<long>::foo;

template<>
template<typename U, bool V> requires V
constexpr int S<long>::foo;
