// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getIntegerLiteralSubexpressionValue
// EXPECT-CRASH-ASSERT: false
// EXPECT-CRASH-ASSERT: Unexpected

int foo() { return (__real__ 42) == 42; }
