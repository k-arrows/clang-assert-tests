// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setImplicitCopyAssignmentIsDeleted
// EXPECT-CRASH-ASSERT: DefaultedCopyAssignmentIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForCopyAssignment 

class A {
public:
  &operator=(const A &);
};

class B : virtual public A {
};
