// RUN: clang++ -c %s
// EXPECT-FAIL

int foo() {
  alignas() {}
  return 0;
}
