// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: countLeadingZeros
// EXPECT-CRASH-ASSERT: isNumber

long foo(long z);

long bar() {
  return ((long)foo) << 33;
}
