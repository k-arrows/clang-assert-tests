// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnIdExpression
// EXPECT-CRASH-ASSERT: getAsSingle
// EXPECT-CRASH-ASSERT: declaration

template<class > foo ; foo(foo<>
