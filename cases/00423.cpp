// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CompareConversions
// EXPECT-CRASH-ASSERT: Conversions.size

namespace N {
struct S {
  void foo(int);
};

void bar() {
  void foo(bool b);
  using N::foo;
  foo(S());
}
} // namespace N
