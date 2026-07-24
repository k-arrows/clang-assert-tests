// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template <Foo<char, int> auto &x> using K = int;

template <typename T, typename... Ts>
concept Foo = false;

template <Foo<char, int> auto &x> using K = int;
