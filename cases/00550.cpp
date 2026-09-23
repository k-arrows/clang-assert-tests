// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

void foo [[clang::sycl_local]];
