// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ~DeclaratorScopeObj
// EXPECT-CRASH-ASSERT: SS.isSet
// EXPECT-CRASH-ASSERT: cleared

template <typename T> struct S {};

template <typename T> template <typename U> void S<T>::foo() {
  void S<int>::foo<int>();
}
