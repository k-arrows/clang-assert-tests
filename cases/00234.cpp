// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: CheckSubElementType
// EXPECT-CRASH-ASSERT: SemaRef.Context.hasSameType
// EXPECT-CRASH-ASSERT: initialization

struct S {};

template <typename T> struct SS {
  T t1;
  T t2;
};

template <class T, class... Args> T C(Args... args) { return SS("foo"); }

S s = C<S>();
