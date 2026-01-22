// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitBlockPointerTypeLoc
// EXPECT-CRASH-ASSERT: Chunk
// EXPECT-CRASH-ASSERT: BlockPointer

template <class T> T (^t)() __attribute__((ext_vector_type(2)));
