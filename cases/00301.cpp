// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LayoutVirtualBases
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: Cannot

template <typename T> void foo() {
  using bar = int;

  struct S {};

  struct SS : S {
    int k = __alignof__(k);
  };
}
