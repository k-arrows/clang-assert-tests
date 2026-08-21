// RUN: clang++ -c %s
// EXPECT-FAIL

int *foo [[clang::address_space(bar())]];
