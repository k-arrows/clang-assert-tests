// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isTemplateTemplateParameterAtLeastAsSpecializedAs
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: NonDeducedMismatch

template <template <decltype(foo())> typename T> struct S {};
template <int *> struct P;

S<P> s;
