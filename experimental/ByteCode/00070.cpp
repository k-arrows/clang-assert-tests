// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

template <auto v> class B {};
struct X {
  int n;
};
struct Y : X {
  void foo(B<(const int Y::*)&X::n>) {}
};
