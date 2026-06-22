// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: view
// EXPECT-CRASH-ASSERT: isBlockPointer

static_assert((delete[] (int *)(bool b) new int[2], true), "");
