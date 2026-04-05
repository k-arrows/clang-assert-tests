// RUN: clang++ -c %s
// EXPECT-FAIL

int foo(void) {
  extern union {
    int a;
  };
  return a;
}
