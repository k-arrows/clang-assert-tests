// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  char c;
};

void foo() {
  S s{({
    for (;;) {
    }
    __builtin_strlen("bar");
  })};
}
