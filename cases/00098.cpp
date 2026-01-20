// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnGCCAsmStmtString
// EXPECT-CRASH-ASSERT: isOrdinary

void foo() {
  asm("" ::: (u8""}));
}
