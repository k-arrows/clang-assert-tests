// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckClassTemplate
// EXPECT-CRASH-ASSERT: PrevClassTemplate
// EXPECT-CRASH-ASSERT: specialization

template <class T> struct A {};
template <class T> struct B : A<T> {};
template <> template <class T> class A<int>::B {};
