// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <typename T = int> struct S {};
S (S::*(*S)())();
