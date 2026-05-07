// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ResolveAddressOfOverloadedFunction
// EXPECT-CRASH-ASSERT: AddressOfExpr
// EXPECT-CRASH-ASSERT: OverloadTy

template <typename T> struct S {
  using type = T;
  void foo{};
};

template <typename T> T &&bar(typename S<T>::type &x) { return x; }

struct SS {};
SS && (&baz) = bar<SS>;
