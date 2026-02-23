// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: CallVirt
// EXPECT-CRASH-ASSERT: DynamicDecl 

struct S {
  virtual int foo();
};

int bar(int{((S *const)0)->foo()});
