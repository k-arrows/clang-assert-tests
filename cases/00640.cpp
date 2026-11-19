// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

int umask(char);

void foo() { umask(0xFFFF); }
