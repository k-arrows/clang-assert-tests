// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

auto foo = *(_Complex double *)&(int[2]){'4', '2'};
