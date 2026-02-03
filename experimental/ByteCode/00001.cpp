// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT 

constexpr void foo() { new (bar()) int; }
