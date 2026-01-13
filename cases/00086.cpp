// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: GetTypeSourceInfoForDeclarator
// EXPECT-CRASH-ASSERT: getFullDataSize
// EXPECT-CRASH-ASSERT: CurrTL

foo() { = [](operator decltype(auto)() ; };
