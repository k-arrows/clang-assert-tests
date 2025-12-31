// RUN: clang++ -c -std=c++14 %s
// EXPECT-CRASH-ASSERT: EvaluateAsRValue
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: evaluator

template <int (*F)(int)> class bar {};

struct S {
  int foo(int a = (char *c)) { return bar<foo>::baz; }
}
