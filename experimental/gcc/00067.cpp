// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

struct N {
  int x;
};

template <typename U> struct S {
  auto foo(const N i) post(r : i.x > 0) {}
};

void bar() {
  N n;
  S<N> s;
  s.foo(n);
}
