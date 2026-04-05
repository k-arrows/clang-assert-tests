// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: BuildDeductionGuideForTypeAlias
// EXPECT-CRASH-ASSERT: FReturnType
// EXPECT-CRASH-ASSERT: expected

template <typename T> struct S1 {};
template <typename T> using S2 = S1<char>;
template <typename T> using S3 = S2<T>;

S3 foo(42);
