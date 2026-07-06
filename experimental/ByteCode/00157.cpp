// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: evaluateAsInitializer
// EXPECT-CRASH-ASSERT: Stk.empty

struct S {
  ~S() {};
  const char *name;
};

struct P {
  S s;
};

void foo() {
  P p{({
    for (;;) {
      ;
    }
    S("e");
  })};
}
