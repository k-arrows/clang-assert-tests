// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setMemberSpecialization
// EXPECT-CRASH-ASSERT: getCommonPtr
// EXPECT-CRASH-ASSERT: Only

template <typename T> struct S {};
template <typename T : public TT> constexpr int S<int>::foo;
template <> template <typename T> constexpr int S<int>::foo;
template <> template <typename T> constexpr int S<int>::foo;
