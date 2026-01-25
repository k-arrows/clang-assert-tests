// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: FindInstantiatedDecl
// EXPECT-CRASH-ASSERT: ArgPackSubstIndex
// EXPECT-CRASH-ASSERT: declaration

void foo() {
  [](auto... x) { ([&](auto... y) { ([x, y] {}, ...); }); }()
}
