// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int foo() {
bar:
  return 0;

bar:
  do {
    break bar;
  } while (0);
}
