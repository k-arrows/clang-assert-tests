// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

struct A {
  operator long &();
};

struct B {
  operator long &();
};

struct C : B, A {};

void foo(C c) { ++c; }
