// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> class C {};
template <typename T1, typename T2> struct S<T1, T2> {
  class M {};
  template <class T> void bar() { C<>::foo<T>(); };
  int foo<T2>();
  M::foo<M>();
};
