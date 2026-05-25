// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: defaultedDestructorIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForDestructor
// EXPECT-CRASH-ASSERT: DeclaredSpecialMembers
// EXPECT-CRASH-ASSERT: property

struct S {
  virtual ~S() __attribute__((vectorcall));
};

struct SS : S {
  ~SS();
};
