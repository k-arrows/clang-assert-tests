// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTemplateInstantiationArgs
// EXPECT-CRASH-ASSERT: Qualifier
// EXPECT-CRASH-ASSERT: TPLs.empty
// EXPECT-CRASH-ASSERT: without

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
