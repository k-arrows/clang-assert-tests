// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: compileConstructor
// EXPECT-CRASH-ASSERT: CompoundStmt

union U {
  constexpr U(const U &u) { ; };
};
