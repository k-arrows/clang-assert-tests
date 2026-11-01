// RUN: clang++ -c %s
// EXPECT-FAIL

void foo [[clang::sycl_local]];
