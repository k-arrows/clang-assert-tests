// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: view
// EXPECT-CRASH-ASSERT: isBlockPointer

double _Complex z = *(double _Complex *)&(*(int *)0x1234);
