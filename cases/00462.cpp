// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

void foo[bar](auto __attribute__((noderef)) _Nullable *){};
