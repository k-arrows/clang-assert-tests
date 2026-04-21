// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: canClassify

template <typename T> struct S {
  int a = [] { return [](auto t) noexcept((g(f...))) { return 0; }(0); }();
};

S<float> x;
