// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  struct S {
    int m[];
  } s;
  constexpr auto p = s.m;
}

void bar() { foo(); }
