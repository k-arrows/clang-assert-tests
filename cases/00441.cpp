// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {};
template <> template <typename T> int S<long>::foo;
template <> template <typename T> int S<long>::foo;
template <> template <typename T> constexpr int S<long>::foo;
