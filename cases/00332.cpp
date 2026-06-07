// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: InstantiateFunctionDefinition
// EXPECT-CRASH-ASSERT: NewFunction
// EXPECT-CRASH-ASSERT: Failed

template <typename T> constexpr int foo(T);

const int i = foo(42);

template <typename T> constexpr int foo(T) { return bar; }
