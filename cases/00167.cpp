// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

__attribute__((callback(1, 2, 3))) void foo();
