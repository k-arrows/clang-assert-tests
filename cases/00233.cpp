// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildFieldReferenceExpr
// EXPECT-CRASH-ASSERT: hasAddressSpace

struct S {
  int [[clang::address_space(1)]] i;
  bool operator==(const S &) const = default;
};

static_assert(!__is_trivially_equality_comparable(S));
