// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: VisitDecompositionDecl
// EXPECT-CRASH-ASSERT: OldDecls
// EXPECT-CRASH-ASSERT: NewDecls

struct S {
  constexpr S() : i(1) {};
  int i : 2;
};

void foo(auto) { constexpr auto [... p] = S(); }

void bar() { foo(42); }

template <> struct S {};
