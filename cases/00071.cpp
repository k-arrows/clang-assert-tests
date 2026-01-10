// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TransformInitializer
// EXPECT-CRASH-ASSERT: empty
// EXPECT-CRASH-ASSERT: parens

struct S {
  S(int i) : {}
};

template <bool T> S foo() {
  S obj(1;
  return obj;
}

void bar() { foo<false>(); }
