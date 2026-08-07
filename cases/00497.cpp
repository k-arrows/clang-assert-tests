// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: diagnoseMissingImport
// EXPECT-CRASH-ASSERT: Owner
// EXPECT-CRASH-ASSERT: hidden

template <typename T> struct S {
  enum E : int;
};

template <typename T>
enum S<T>::E : int {
  e, ; typename R, foo = S<int>::E::e;
};
