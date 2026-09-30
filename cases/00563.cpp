// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isTemplateTemplateParameterAtLeastAsSpecializedAs
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: NonDeducedMismatch

template <template <decltype(foo())> typename> struct S {};
template <int &p> struct P;
S<P> s;
