// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TransformCXXFoldExpr
// EXPECT-CRASH-ASSERT: Unexpanded.empty
// EXPECT-CRASH-ASSERT: without

template <bool... b> void foo() {
  ([]() __attribute((diagnose_if(b, "error"))) {}(), ...);
}

void bar() { foo<>(); }
