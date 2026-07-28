// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Create
// EXPECT-CRASH-ASSERT: castIsValid
// EXPECT-CRASH-ASSERT: Invalid

template <typename T> void foo(bool) {}

void bar() { int baz __attribute__((cleanup(foo<int>))); }
