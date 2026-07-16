// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  ~S() {}
  bool b;
  void foo(S b) __attribute__((enable_if(b.b, "")));
}
