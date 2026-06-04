// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: BuildDeductionGuideForTypeAlias
// EXPECT-CRASH-ASSERT: template

template <typename T> struct S1 {
  int x;
};
template <typename T> using S2 = S1<char>;
template <typename T> using S3 = S2<T>;

S3 foo(42);
