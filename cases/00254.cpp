// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckJump
// EXPECT-CRASH-ASSERT: Permissive
// EXPECT-CRASH-ASSERT: LabelAndGotoScopes

template <class T> void foo() { goto *&&bar; };

void baz() { foo<int>(); }
