// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo(void) {
  _Complex double cd;
  cd = *(_Complex double *)&(int[2]){};
}
