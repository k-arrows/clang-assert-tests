// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getMangledNameImpl
// EXPECT-CRASH-ASSERT: II
// EXPECT-CRASH-ASSERT: unnamed 

int foo(void) {
  extern union {
    int a;
  };
  return a;
}
