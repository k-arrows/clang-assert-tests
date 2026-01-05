// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getVLASize
// EXPECT-CRASH-ASSERT: vlaSize
// EXPECT-CRASH-ASSERT: no

int g[2] = {0};

int f(int i, int j) {
  g[j]++;
  return i;
}

void foo() {
  if (3 != sizeof(*(0 ? (char (*)[f(5, 0)])0 : (char (*)[f(3, 1)])0)))
    __builtin_abort();
}
