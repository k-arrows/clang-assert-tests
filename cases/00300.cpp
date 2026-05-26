// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setPreviousDeclaration
// EXPECT-CRASH-ASSERT: PrevDecl
// EXPECT-CRASH-ASSERT: PrevFunTmpl
// EXPECT-CRASH-ASSERT: mismatch

extern "C" {
void foo() {}
}

extern "C" {
struct S {};
void S(struct {template <typename T> friend void foo(){}});
}
