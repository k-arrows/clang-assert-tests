// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LayoutNonVirtualBases
// EXPECT-CRASH-ASSERT: IsUnion
// EXPECT-CRASH-ASSERT: dynamic

union alignas(16) H {
  class C {
    int type();
    virtual char const *foo() const;
  };
  class CC : C {};
  char const *CC::foo() const { return 0; }
};
