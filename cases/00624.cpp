// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CreateGenericSelectionExpr
// EXPECT-CRASH-ASSERT: ControllingExprOrType
// EXPECT-CRASH-ASSERT: Must

template <typename T> struct S {
  enum { id = _Generic(T(), void: 1) };
};

S<void()>::s;
