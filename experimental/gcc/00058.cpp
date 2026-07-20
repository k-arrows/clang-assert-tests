// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S;
typedef foo < S struct {};
