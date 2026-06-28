// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T1> struct A {
  template <typename T2> struct B {
    auto y;
  };
};

A<int>::B x(42);
