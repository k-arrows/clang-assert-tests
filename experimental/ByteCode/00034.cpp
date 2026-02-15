// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: UnsignedOrNone
// EXPECT-CRASH-ASSERT: operator

void foo() {
  struct A {
    char buf[0xFFFFFFFF];
  };
  struct B : A {};
  struct C {
    B b[1];
  } *c;

  int bar = __builtin_object_size(&c->b[0], 3);
};
