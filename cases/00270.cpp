// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

struct S {};

class A {
  S operator<=>(const A &) const;
};

class B {
  A a;
  S operator<=>(const B &) const = default;
};

bool b = B() < B();
