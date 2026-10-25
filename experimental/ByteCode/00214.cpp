// RUN: clang++ -c -std=c++23 -fms-compatibility -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: EvaluateKnownConstInt
// EXPECT-CRASH-ASSERT: EVResult
// EXPECT-CRASH-ASSERT: Expression

auto foo() {
  const long bar = (long)&&label;
  return (void *)bar;
label:
}
