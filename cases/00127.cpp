// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setLazyInClassInitializer
// EXPECT-CRASH-ASSERT: hasInClassInitializer
// EXPECT-CRASH-ASSERT: getInClassInitializer

template <class T> void foo() {
  struct S1 {
    struct S2 {
      int i = 0;
    };
    enum { E = S2() };
  };
};

void bar() { foo<int>(); }
