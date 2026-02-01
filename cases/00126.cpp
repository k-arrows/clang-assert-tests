// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TemplateSpecializationTypeLoc
// EXPECT-CRASH-ASSERT: getNestedNameSpecifier
// EXPECT-CRASH-ASSERT: getQualifier

template <class T> struct S1;

template <class T> S2 < typename S1<T>::S1<T>::
