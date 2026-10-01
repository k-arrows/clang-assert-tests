// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: isBlockPointer

void foo() { __builtin_is_string_literal(""); }
