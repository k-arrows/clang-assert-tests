// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTypeInfoImpl
// EXPECT-CRASH-ASSERT: EltInfo.Width
// EXPECT-CRASH-ASSERT: Overflow

template <unsigned Size> struct S {
  double A[Size];
};

template <unsigned Size> struct SS {
  S<Size> A[Size];
};

void foo() { SS<-123> ss; }
