// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitFunctionTypeLoc
// EXPECT-CRASH-ASSERT: DeclaratorChunk

template <class T> struct S {
  T *Foo() __attribute__((__vector_size__(8)));
};
