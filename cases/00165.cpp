// RUN: clang++ -c -std=c++23 %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

void foo()([] consteval -> int {}())
