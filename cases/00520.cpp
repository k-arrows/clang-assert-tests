// RUN: clang++ -c -x c %s
// EXPECT-CRASH-NOASSERT

int foo() {
  for (;;)
    while ([[]];)
}
