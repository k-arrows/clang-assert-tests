// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: addObjectUnderConstruction
// EXPECT-CRASH-ASSERT: Key
// EXPECT-CRASH-ASSERT: IndexOfElementToConstruct
// EXPECT-CRASH-ASSERT: UnderConstruction

struct A {
  ~A() {}
};

struct B {
  B(A = A()) {}
};

void foo() { B b[2]; }
