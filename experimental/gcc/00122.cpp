// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

template <class T> struct S {
  struct V {};
  template <typename T> struct D : [[= V{}]] T {};
};
