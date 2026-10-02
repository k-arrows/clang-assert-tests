// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: GetValueRange
// EXPECT-CRASH-ASSERT: isLValue
// EXPECT-CRASH-ASSERT: isAddrLabelDiff

struct S {
  char c;
};

void foo() {
  S s{({
    for (;;) {
    }
    __builtin_strlen("bar");
  })};
}
