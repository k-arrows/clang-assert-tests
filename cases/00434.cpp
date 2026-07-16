// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getRepAsDecl
// EXPECT-CRASH-ASSERT: isDeclRep
// EXPECT-CRASH-ASSERT: DeclSpec

auto union {
} foo<>();
