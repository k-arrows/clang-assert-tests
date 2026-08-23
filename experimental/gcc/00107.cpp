// RUN: clang++ -c %s
// EXPECT-FAIL

template <int> struct S {
  friend int foo(bool = true) { return 0; }
  friend int foo(bool);
};

S<42> s;
S<0>::s();
