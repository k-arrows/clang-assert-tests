// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getAlignment
// EXPECT-CRASH-ASSERT: isAlignmentDependent

struct alignas(void() noexcept(T())) S {};
S *s = new (123) S;
