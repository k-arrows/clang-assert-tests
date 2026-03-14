// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  char buf[1];
  const double test_buf[] = {'4', '2'};
  __builtin_strcpy(buf, test_buf + 1);
}
