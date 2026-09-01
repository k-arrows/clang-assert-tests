// RUN: clang++ -c %s
// EXPECT-FAIL

union alignas(16) H {
  class C {
    int type();
    virtual char const *foo() const;
  };
  class CC : C {};
  char const *CC::foo() const { return 0; }
};
