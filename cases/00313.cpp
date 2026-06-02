// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: castAs
// EXPECT-CRASH-ASSERT: isKind

struct S {
  [[gnu::stdcall]] S(int);
};

struct SS : S {
  using S::S;
  void foo() { SS(42); }
};
