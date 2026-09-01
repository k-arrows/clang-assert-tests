// RUN: clang++ -c -x c %s
// EXPECT-FAIL

int foo() {
  for (;;)
    while ([[]];)
}
