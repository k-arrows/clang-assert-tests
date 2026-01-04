// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VerifyJumps
// EXPECT-CRASH-ASSERT: Permissive
// EXPECT-CRASH-ASSERT: LabelAndGotoScopes

void foo() {
    switch (0) {
      __attribute__((assume (({ default:; 1; }))));
    }
}
