// RUN: clang++ -c -std=c++20 -fms-compatibility %s
// EXPECT-CRASH-ASSERT: transformTemplateParam
// EXPECT-CRASH-ASSERT: NewTSI

template <int> using foo = char;

template <typename... Ts> struct S {
  template <foo<sizeof(bar({42}))>> S();
};

template <int> using baz = S<>;

baz qux;
