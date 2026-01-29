// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckIfAnyEnclosingLambdasMustCaptureAnyPotentialCaptures
// EXPECT-CRASH-ASSERT: isUnevaluatedContext

void foo(int i) {
  auto L = [=](auto a) { sizeof(typeof(*(char (*)[i])a)); }
}
