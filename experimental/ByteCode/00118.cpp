// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitUnaryExprOrTypeTraitExpr
// EXPECT-CRASH-ASSERT: isArgumentType

typedef decltype(sizeof(int)) T;
constexpr T foo(T x) { return __builtin_omp_required_simd_align * 42; }
