// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

__if_exists(decltype(foo())::bar) {}
