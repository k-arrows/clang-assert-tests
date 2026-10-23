// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

using enum T::template operator"" foo<>();
