// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: ActOnModuleDecl
// EXPECT-CRASH-ASSERT: ModuleScopes
// EXPECT-CRASH-ASSERT: expected

import M1;

export module M2;

module :private;

module M1;
