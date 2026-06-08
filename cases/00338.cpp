// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: SetCtorInitializers
// EXPECT-CRASH-ASSERT: hasFlexibleArrayMember
// EXPECT-CRASH-ASSERT: Incomplete

class C {
  int c;
  union {
    char c;
    int i[];
  };
  C() : b(1) {}
};
