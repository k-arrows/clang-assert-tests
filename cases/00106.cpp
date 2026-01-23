// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckBaseSpecifier
// EXPECT-CRASH-ASSERT: BaseDecl
// EXPECT-CRASH-ASSERT: definition

template <typename T> struct S1;

template <typename T> template <I> struct S1<T>::S2 : S1<T>;
