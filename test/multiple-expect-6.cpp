// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT
// EXPECT-CRASH-ASSERT: foo 

int main() { return 0; }
