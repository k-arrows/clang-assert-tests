// RUN: clang++ -c -std=c++2b %s
// EXPECT-CRASH-ASSERT: getName
// EXPECT-CRASH-ASSERT: Name.isIdentifier
// EXPECT-CRASH-ASSERT: simple

struct S {
  constexpr S(auto) {}
};

constexpr auto a = [](this S) { return 1; };
static_assert((&decltype(a)::operator())(1) == 42);
