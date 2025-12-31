// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: foo

#pragma clang __debug crash
int main() { return 0; }
