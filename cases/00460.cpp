// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Finish
// EXPECT-CRASH-ASSERT: TypeSpecOwned
// EXPECT-CRASH-ASSERT: isDeclRep

auto struct S {
} auto;
