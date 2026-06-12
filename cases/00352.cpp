// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getUnconstrainedType
// EXPECT-CRASH-ASSERT: getContainedAutoType
// EXPECT-CRASH-ASSERT: isConstrained

template <Foo<char, int> auto &x> using K = int;

template <typename T, typename... Ts>
concept Foo = false;

template <Foo<char, int> auto &x> using K = int;
