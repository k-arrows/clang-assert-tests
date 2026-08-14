// RUN: clang++ -c %s
// EXPECT-PASS

struct A {
  int (*foo)();
};

template <typename T> struct S : public A {
  void bar() { A::foo(); }
};
