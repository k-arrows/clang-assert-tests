// RUN: clang++ -c %s
// EXPECT-FAIL

const char foo = bar;
const int &bar = foo;
