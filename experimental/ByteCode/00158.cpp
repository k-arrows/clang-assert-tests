// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitCXXInheritedCtorInitExpr
// EXPECT-CRASH-ASSERT: F

struct S {
  constexpr S(int = ;
};

struct SS : S {
  using S::S;
};

SS ss{42};
