// RUN: clang++ -c -target avr -O1 %s
// EXPECT-CRASH-ASSERT: setAliasee
// EXPECT-CRASH-ASSERT: Aliasee
// EXPECT-CRASH-ASSERT: getType
// EXPECT-CRASH-ASSERT: should

struct A {};
struct B : A {
  ~B();
};

B::~B() {}

struct C : B {
  ~C();
};

C::~C() {}
