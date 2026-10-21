// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

struct S {
  int s1, s2 = 0;
};

void foo() {
  template for (int x : {S(1)}) {}
}
