// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

struct S {
  S(int);
};
struct SS {
  S s;
};

void foo() { SS *ss = new SS{42, 43}; }
