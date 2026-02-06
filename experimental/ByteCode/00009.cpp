// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitBuiltinCallExpr
// EXPECT-CRASH-ASSERT: ReturnT

constexpr void foo() { __builtin_complex(1., 2.); }
