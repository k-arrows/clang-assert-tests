// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: VisitForStmt
// EXPECT-CRASH-ASSERT: Block
// EXPECT-CRASH-ASSERT: Succ

void foo() {
  for (;; ({ continue; }))
    ;
}
