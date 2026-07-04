// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  struct S {
    int &operator++(());
  };
  (S()++)++;
}
