// RUN: clang++ -c %s
// EXPECT-FAIL

template <const char *N> struct A {};
Foo<class T> struct B {};
template <class T> struct D {
  static const char c[1];
  typedef A<c> C;
};
template <Bar T> const char D<T>::c[1];
