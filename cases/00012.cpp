// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EnterDeclaratorContext
// EXPECT-CRASH-ASSERT: CurContext
// EXPECT-CRASH-ASSERT: ancestor

a = [](::
