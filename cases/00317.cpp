// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> struct A {};
template <class T> struct B : A<T> {};
template <> template <class T> class A<int>::B {};
