// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: evaluateAsInitializer
// EXPECT-CRASH-ASSERT: empty

constexpr __complex__ float foo = 0.;

int bar = ~foo;
