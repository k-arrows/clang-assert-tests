// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  template <class T0, class T1, Class T2, class... T>
  void operator()(T0, T1, T2, T &...t) {}
};

S s;

void foo() { s(1, 2, 3); }
