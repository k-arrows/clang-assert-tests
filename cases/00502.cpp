// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: containsErrors
// EXPECT-CRASH-ASSERT: value-dependent
// EXPECT-CRASH-ASSERT: invalid

template <typename T> struct S {
  int a = [] { return [](auto t) noexcept(foo()) {}(0); }();
};

S<float> s;
