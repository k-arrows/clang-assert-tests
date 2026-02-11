// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

constexpr void foo() { __builtin_complex(1., 2.); }
