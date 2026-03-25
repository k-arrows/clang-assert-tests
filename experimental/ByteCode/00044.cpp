// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  int n;
};
constexpr S &addr(S &&s) {
  for (;;)
    ;
}

A<int *, &addr({}).n> d;
