// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

auto foo = new int[2][4][1]{};
