// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

#pragma clang __debug crash
int main() { return 0; }
