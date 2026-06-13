// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: DelayDependentAccess
// EXPECT-CRASH-ASSERT: EC.isDependent
// EXPECT-CRASH-ASSERT: non-dependent

template <typename... I> using idx = struct S {

  template <typename... T> class X {
    friend T...;
    static void foo() {}
  };

  struct A {
    void bar() { X<A>::foo(); };
  };
}
