// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setMemberSpecialization
// EXPECT-CRASH-ASSERT: InstantiatedFromMember
// EXPECT-CRASH-ASSERT: Only

template <typename T> struct S {};
template <> template <typename T> int S<long>::foo;
template <> template <typename T> int S<long>::foo;
template <> template <typename T> constexpr int S<long>::foo;
