// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T>
struct __attribute__((no_specializations(__vector_size__(16)))) S {};

template <> struct S<long> {};
