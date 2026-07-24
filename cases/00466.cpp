// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckDesignatedInitializer
// EXPECT-CRASH-ASSERT: getNumInits
// EXPECT-CRASH-ASSERT: should

union U {
  int n;
  float f;
};

struct S {
  U u[3];
};

struct D {
  S s;
};

D d = {(const volatile A &){}, .s.u[1].f = 42};
