// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

struct S {
  int foo() {
    S s;
  auto l = [s](this auto {
      return s->bar();
  };
  }
};
