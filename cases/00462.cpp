// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

void foo[bar](auto __attribute__((noderef)) _Nullable *){};
