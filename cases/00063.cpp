// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: removeDecl
// EXPECT-CRASH-ASSERT: I
// EXPECT-CRASH-ASSERT: linked

void foo(struct s1 { enum e { A = (struct s2), B } f; }){};
