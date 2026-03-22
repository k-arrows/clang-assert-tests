// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DefineImplicitMoveConstructor
// EXPECT-CRASH-ASSERT: isDefaulted
// EXPECT-CRASH-ASSERT: isMoveConstructor
// EXPECT-CRASH-ASSERT: doesThisDeclarationHaveABody
// EXPECT-CRASH-ASSERT: isDeleted
// EXPECT-CRASH-ASSERT: ctor

struct F {
  F(F &&) = delete;
};

template <int = 0> struct M {
  F foo;
  M();
  M(M &&);
};

template <int I> M<I>::M(M &&) = default;

M<> foo() {
  M<> m;
  return m;
}
