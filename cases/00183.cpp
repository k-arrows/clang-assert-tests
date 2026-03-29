// RUN: clang++ -c %s
// EXPECT-PASS

void *f(int *p)
  __attribute__((ownership_returns(malloc)));

// The original (flaky) test case:
// void *f(int, int)
//   __attribute__((ownership_returns(used)))
//   __attribute__((ownership_returns(foo, 2)));
