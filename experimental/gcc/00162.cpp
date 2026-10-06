// RUN: clang++ -c %s
// EXPECT-PASS

struct A {};

struct VB : A {
  using A::A;
};

struct B : A {
  using A::A;
};

struct C : B, virtual VB {
  using B::B;
  using VB::VB;
};
