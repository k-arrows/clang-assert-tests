// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S1;

template <typename T> template <I> struct S1<T>::S2 : S1<T>;
