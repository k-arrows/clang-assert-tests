// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: AnnotatePreviousCachedTokens
// EXPECT-CRASH-ASSERT: getAnnotationEndLoc

template<> (decltype>)
