// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setImplicitDestructorIsDeleted
// EXPECT-CRASH-ASSERT: DefaultedDestructorIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForDestructor
// EXPECT-CRASH-ASSERT: should

class A {
public:
  void operator delete(void *p) {}
  virtual ~A() {}
};

class B : A {};
struct S : B {};
