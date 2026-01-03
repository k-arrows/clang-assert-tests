// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: HandleConstructorCall
// EXPECT-CRASH-ASSERT: hasSameUnqualifiedType
// EXPECT-CRASH-ASSERT: initializers

struct S {};

struct T {
  T(int x) : t(x) {}
};

struct U : public T, public S {
  constexpr U() : S() {}
};
