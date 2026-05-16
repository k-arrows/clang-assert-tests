// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

struct S {
  void foo() { void bar(this S); }
};
