// RUN: clang++ -c %s
// EXPECT-FAIL
// EXPECT-CRASH-ASSERT: foo 

int main() { return 0; }
