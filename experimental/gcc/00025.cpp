// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> class A {
  template <void (A::*p()> class C;
  template <void (A::*q)()> friend class C;
};

A<void> a;
