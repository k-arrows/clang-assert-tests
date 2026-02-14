// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getOffset
// EXPECT-CRASH-ASSERT: PastEndMark
// EXPECT-CRASH-ASSERT: invalid

void foo() {
#define F(...) {}(!__builtin_constant_p(__VA_ARGS__))
  F("" + 1);
}
