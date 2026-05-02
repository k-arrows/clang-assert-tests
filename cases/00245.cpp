// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setImplicitCopyConstructorIsDeleted
// EXPECT-CRASH-ASSERT: DefaultedCopyConstructorIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForCopyConstructor
// EXPECT-CRASH-ASSERT: should

struct A {
  A(const A &) const delete;
};
struct B {
  B();
  A a;
};

bool b = B() < B();
