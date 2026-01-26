// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: conjureSymbolVal
// EXPECT-CRASH-ASSERT: Ex
// EXPECT-CRASH-ASSERT: CFGStmt

void foo(int x) { [[assume(x == 42 ? true : throw 1)]]; }
