// RUN: clang++ -c %s
// EXPECT-FAIL

void foo() {
  [](struct { virtual void bar(); });
}
