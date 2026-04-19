// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: TransformOpaqueValueExpr
// EXPECT-CRASH-ASSERT: getSourceExpr
// EXPECT-CRASH-ASSERT: AlreadyTransformed
// EXPECT-CRASH-ASSERT: transformation

struct S {};

template <typename... T> constexpr void F(S &out, const char *fmt, T... args) {
  while (__builtin_is_within_lifetime(&foo)) {
  }
}

template <class T> class C {
  T value = {};
};

void bar() {
  S s;
  __builtin_dump_struct((C<int> *)nullptr, F, s);
}
