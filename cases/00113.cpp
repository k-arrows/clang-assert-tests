// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: RequireLiteralType
// EXPECT-CRASH-ASSERT: Dtor
// EXPECT-CRASH-ASSERT: class

struct S {
  ~S() = (0);
};

constexpr void foo() { S s; }
