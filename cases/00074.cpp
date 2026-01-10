// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkAliasAttr
// EXPECT-CRASH-ASSERT: isThisDeclarationADefinition
// EXPECT-CRASH-ASSERT: isExternallyVisible
// EXPECT-CRASH-ASSERT: Broken

extern int foo __attribute__((alias("")))(123
