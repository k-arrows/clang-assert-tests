// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: HandleCXXModuleDirective
// EXPECT-CRASH-ASSERT: CPlusPlusModules
// EXPECT-CRASH-ASSERT: ModuleTok

#module
