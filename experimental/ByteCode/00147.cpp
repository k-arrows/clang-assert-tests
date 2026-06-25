// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

auto foo = new int[2][4][1]{};
