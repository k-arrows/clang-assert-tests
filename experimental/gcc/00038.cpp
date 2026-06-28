// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

template <typename T> struct S {
  void f() {};
  int g() post(r : f) { return 0; }
};
