// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: cleanupAfterFunctionCall
// EXPECT-CRASH-ASSERT: false
// EXPECT-CRASH-ASSERT: Can't

struct S {
  template <typename T> constexpr S(T, ...) {}
};

struct SS : S {
  using S::S;
};

SS ss(42);
