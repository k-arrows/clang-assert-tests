// RUN: clang++ -c %s
// EXPECT-FAIL

auto foo = [] {} = {};
