// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitCXXTypeidExpr
// EXPECT-CRASH-ASSERT: getExprOperand

namespace std {
struct type_info struct S {
  virtual ~S();
  constexpr void foo() { typeid((S &&)*nullptr); }
};
}; // namespace std
