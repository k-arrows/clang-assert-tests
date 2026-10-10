// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {};

template<typename T> struct D : S {
  D() requires (sizeof(T) > sizeof(char));
  using S::S;
};

D<char> d;
