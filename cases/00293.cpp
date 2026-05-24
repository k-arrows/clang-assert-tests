// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitLValueReferenceTypeLoc
// EXPECT-CRASH-ASSERT: DeclaratorChunk

template <typename T>
constexpr void foo(const T(&) __attribute__((__vector_size__(8)))) {
  ;
}
