// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: ActOnModuleDecl
// EXPECT-CRASH-ASSERT: CPlusPlusModules
// EXPECT-CRASH-ASSERT: TheGlobalModuleFragment
// EXPECT-CRASH-ASSERT: mismatched

module;

module :private;

module M;
