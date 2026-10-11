// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

template <typename T> struct A {
  char a;
  constexpr T &foo(const char &x) { return *static_cast<T *>(this); }
};

template <typename T> struct B {
  constexpr T &bar(const char &x) { return *static_cast<T *>(this); }
};

template <typename T> struct C : A<C<T>>, B<T> {};
struct D : B<D> {};

auto L = C<D>().foo(0).bar(42);
