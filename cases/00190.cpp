// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getTemplateArgumentPackPatternForRewrite
// EXPECT-CRASH-ASSERT: pack_size
// EXPECT-CRASH-ASSERT: isPackExpansion
// EXPECT-CRASH-ASSERT: unexpected

template <typename... _Types> struct S {
  template <_Types> S(_Types...);
};

template <class T> using A = S<T>;

A foo(42);
