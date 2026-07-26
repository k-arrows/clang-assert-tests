// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <int N> struct S {
  template <class C> friend auto foo(const S<N - 1> &, C) { return N - 1; };
};

template <> struct S<0> {
  template <class C> friend auto foo(const S<0> &, C) {}
};

template struct S<1>;

void bar() { foo(S<0>{}, 0); }
