// RUN: clang++ %s
// EXPECT-CRASH-NOASSERT

template <decltype([](decltype([]() {})) {})> struct S;

S<int>;
