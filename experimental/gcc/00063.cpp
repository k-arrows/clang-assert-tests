// RUN: clang++ -c %s
// EXPECT-FAIL

template <int a> class A {
public:
  A() {}
};

template <typename T> struct B {};

template <typename... B> struct S {
  template <typename B::type... args> using R = A<args...>;
};

S<int>::R<42> s;
