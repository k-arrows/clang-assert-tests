// RUN: clang++ -c %s
// EXPECT-PASS

struct M {
  template <class T> static int static_foo(T) { return 5; }
  template <class T> operator T() { return T{}; }
  operator auto() { return &static_foo<int>; }
};

struct N : M {
  using M::operator auto;
};

template <class T> int test() {
  int j = T{}(3);
  return 0;
}

int Ninst = test<N>();
