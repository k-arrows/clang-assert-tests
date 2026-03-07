// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  void func();
}

S s(__builtin_invoke(&::func, s));
