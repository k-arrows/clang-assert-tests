// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  template <class H> struct L<H> {};

  template <class H> L < H struct A {
    int X = > (H h);
  };
};
