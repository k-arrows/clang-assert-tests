// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setInvalidDecl
// EXPECT-CRASH-ASSERT: TagDecl
// EXPECT-CRASH-ASSERT: isCompleteDefinition

constexpr bool foo() {
  struct U {
    struct S {};
    static constexpr S S::bar{42};
  }
}
