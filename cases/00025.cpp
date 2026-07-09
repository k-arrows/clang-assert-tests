// RUN: clang++ -c %s
// EXPECT-FAIL

auto p = new int[][42]();
