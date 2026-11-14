// RUN: clang++ -c -std=c++26 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {};

struct C {
  C(C &, S s = S());
};

struct D : virtual C {};

void foo(D d) { D d2(d); };
