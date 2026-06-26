// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isBetterOverloadCandidate
// EXPECT-CRASH-ASSERT: Cand2
// EXPECT-CRASH-ASSERT: mismatch

namespace N {
struct S {
  void foo(int);
};
} // namespace N

void bar() {
  void foo(bool b);
  using N::foo;
  foo(42);
}
