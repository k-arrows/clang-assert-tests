// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <typename T> struct A {
  struct B {
    template <typename U> struct X {};
  };
  struct C {
    typedef B::X<typename B::arg> x;
  };
};

template <> struct A<int>::B {};
A<int>::C::x a;
