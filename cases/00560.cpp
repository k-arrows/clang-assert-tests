// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: getDescription
// EXPECT-CRASH-ASSERT: DIAG_UPPER_LIMIT
// EXPECT-CRASH-ASSERT: Invalid

template <class T> T &foo();

template <class T> void bar(T baz) {
#pragma acc atomic
  baz = baz << foo;
}
