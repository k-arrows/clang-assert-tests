// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: Success
// EXPECT-CRASH-ASSERT: getBitWidth
// EXPECT-CRASH-ASSERT: getIntWidth
// EXPECT-CRASH-ASSERT: Invalid

const int x[] = {""};

int foo(char *y) { int n = x[0] + *y; }
