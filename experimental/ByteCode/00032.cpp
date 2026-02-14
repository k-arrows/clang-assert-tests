// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getDeclDesc
// EXPECT-CRASH-ASSERT: Pointee

union U {
  int i;
};

const U *u = &U{3};

void foo() { (u->i != 3); }
