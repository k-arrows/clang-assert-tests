// RUN: clang++ -c %s
// EXPECT-FAIL

#pragma clang __debug crash
int main() { return 0; }
