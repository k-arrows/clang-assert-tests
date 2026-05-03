// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

int *foo [[clang::address_space(bar())]];
