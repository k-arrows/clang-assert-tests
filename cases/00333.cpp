// RUN: clang++ -c %s
// EXPECT-FAIL

class C {
public:
  template <typename T> struct S {
    template <typename U> class I;
  };

  template <typename X> template <typename Y> class S<X>::I {
  public:
    void f(X, Y);
  };

  template <typename X> template <typename Y> void S<X>::I<Y>::f(X, Y) {}
};
