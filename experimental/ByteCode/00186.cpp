// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() { __builtin_is_string_literal(""); }
