// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Create
// EXPECT-CRASH-ASSERT: empty
// EXPECT-CRASH-ASSERT: parameters

template <> template <typename T> using Foo = T;
