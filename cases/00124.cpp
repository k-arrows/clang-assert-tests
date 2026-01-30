// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: addCVRUQualifiers
// EXPECT-CRASH-ASSERT: ~CVRMask
// EXPECT-CRASH-ASSERT: non-CVRU 

struct S {
  _Atomic *foo() requires;
}
