// RUN: clang++ -c -target avr -O1 %s
// EXPECT-FAIL

struct A {};
struct B : A {
  ~B();
};

B::~B() {}

struct C : B {
  ~C();
};

C::~C() {}
