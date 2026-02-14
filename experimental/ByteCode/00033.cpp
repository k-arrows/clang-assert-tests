// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: pop
// EXPECT-CRASH-ASSERT: toPrimType

void foo() {
  double bar = ({
    int baz;
    baz;
}
