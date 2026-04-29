// RUN: clang++ -c -std=c++2b -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: CallPtr
// EXPECT-CRASH-ASSERT: getWrittenArgSize

template <int> struct S {
  static constexpr auto baz = [](this foo) { return 1; };
  static constexpr int (*bar)(foo) = baz;
  static_assert(bar(1) == 1, "");
};

template struct S<42>;
