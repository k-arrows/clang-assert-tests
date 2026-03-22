// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DefineInheritingConstructor
// EXPECT-CRASH-ASSERT: getInheritedConstructor
// EXPECT-CRASH-ASSERT: doesThisDeclarationHaveABody
// EXPECT-CRASH-ASSERT: isDeleted

template <typename... T> struct A : T... {
  using T::T...;
};

struct X {
  X(int);
};

struct Y {
  Y(int, int);
};

void foo() { A<X, Y>(0, 0); }
