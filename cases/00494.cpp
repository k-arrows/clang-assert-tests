// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

void foo [[gnu::vector_size(8)]](auto) {}
