// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setQualifierLoc
// EXPECT-CRASH-ASSERT: getNestedNameSpecifier
// EXPECT-CRASH-ASSERT: nested-name-specifier

template <typename C1, typename C2>
operator int C1::*C2::*__attribute__((__vector_size__(16))) {
  return 0;
}
