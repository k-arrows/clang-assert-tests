// RUN: clang++ -c -fms-compatibility %s
// EXPECT-FAIL

__if_exists(decltype(foo())::bar) {}
