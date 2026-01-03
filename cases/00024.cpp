// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: data
// EXPECT-CRASH-ASSERT: DD
// EXPECT-CRASH-ASSERT: queried

struct S {
  constexpr ~S() {}
struct T (t) {};
}
