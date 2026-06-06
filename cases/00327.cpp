// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: InstantiateAttrs
// EXPECT-CRASH-ASSERT: isPackExpansion

template <FOO... T> struct alignas(alignof(T)...) S {};

S<> s;
