// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitParenTypeLoc
// EXPECT-CRASH-ASSERT: DeclaratorChunk

template <class T> T(Foo)() __attribute__((ext_vector_type(2)));
