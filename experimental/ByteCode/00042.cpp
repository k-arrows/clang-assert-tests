// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  virtual int foo();
};

int bar(int{((S *const)0)->foo()});
