// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: getTemplateInstantiationArgs
// EXPECT-CRASH-ASSERT: NumLevels
// EXPECT-CRASH-ASSERT: Declaration

template <typename... I> using idx = struct S {

  template <typename... T> class X {
    friend T...;
    static void foo() {}
  };

  struct A {
    void bar() { X<A>::foo(); };
  };
}
