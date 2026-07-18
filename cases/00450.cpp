// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: getQualifierLoc
// EXPECT-CRASH-ASSERT: QualifierData

template <typename T> struct S {
  S *__ptr32 __uptr foo() { return 0; }
};

S<int>::foo();
