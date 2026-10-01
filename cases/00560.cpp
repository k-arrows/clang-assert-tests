// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

template <class T> T &foo();

template <class T> void bar(T baz) {
#pragma acc atomic
  baz = baz << foo;
}
