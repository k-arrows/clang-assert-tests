// RUN: clang++ -c %s
// EXPECT-FAIL

void foo() {
  [] < struct S {};
}
