// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr __complex__ float foo = 0.;

int bar = ~foo;
