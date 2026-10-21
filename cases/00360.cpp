// RUN: clang++ -c -std=c++2c %s
// EXPECT-FAIL

template <typename... Ts>
void foo(Ts... [[carries_dependency]]) {}

template void foo(float);
