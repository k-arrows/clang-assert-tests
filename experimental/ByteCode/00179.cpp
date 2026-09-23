// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: findMostDerivedSubobject
// EXPECT-CRASH-ASSERT: unexpected

void foo() {
  struct S {
    int m[];
  } s;
  constexpr auto p = s.m;
}

void bar() { foo(); }
