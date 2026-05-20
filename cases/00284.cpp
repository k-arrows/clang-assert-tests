// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: FormatASTNodeDiagnosticArgument
// EXPECT-CRASH-ASSERT: Received

void foo();
typedef __attribute__((no_caller_saved_registers)) void bar();

bar(foo);
