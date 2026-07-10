// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

struct S {
  double d;
};

__private_extern__ double S::d = 42.;
