// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: setPtrAndKind
// EXPECT-CRASH-ASSERT: PAsInteger
// EXPECT-CRASH-ASSERT: Improperly

template<class> concept D = true;
printf(section<[]<D>{;
