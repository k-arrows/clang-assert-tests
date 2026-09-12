// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

auto foo = sizeof(__builtin_shufflevector<int>);
