// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildMemberReferenceExpr
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: isDependentScopeSpecifier
// EXPECT-CRASH-ASSERT: instantiation

template <typename T>
auto f = [](auto... args) {
  union {
    char c;
  };
  c = 'a';
};

void g() { f<void>(); }
