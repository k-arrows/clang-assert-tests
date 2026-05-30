// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getMangledNameImpl
// EXPECT-CRASH-ASSERT: II
// EXPECT-CRASH-ASSERT: Attempt

extern "C" {
int foo() {
  extern union {
    int a;
  };
  return a;
}
}
