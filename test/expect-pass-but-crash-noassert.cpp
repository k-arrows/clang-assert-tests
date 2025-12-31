// RUN: clang++ -c %s
// EXPECT-PASS

#pragma clang __debug crash
int main() { return 0; }
