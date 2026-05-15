// RUN: clang++ -c %s
// EXPECT-PASS

struct S {
  template <typename T> decltype(auto) g(T);
};

template <typename U> class A {
  template <typename I> friend decltype(auto) S::g(U);
};

auto foo() { return A<int>(); }
