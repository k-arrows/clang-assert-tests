// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getFunctionTypeInfo
// EXPECT-CRASH-ASSERT: isFunctionDeclarator
// EXPECT-CRASH-ASSERT: Not 

struct S {
  using foo = void();
  static constexpr operator foo {};
}
