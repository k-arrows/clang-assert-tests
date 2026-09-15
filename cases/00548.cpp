// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildFieldReferenceExpr
// EXPECT-CRASH-ASSERT: hasAddressSpace

struct S {
  int x = 42;
  S [[clang::address_space(1)]] s;
} s;

auto [a, b] = s;
