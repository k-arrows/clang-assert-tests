// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TryAnnotateCXXScopeToken
// EXPECT-CRASH-ASSERT: MightBeCXXScopeToken
// EXPECT-CRASH-ASSERT: Cannot

namespace N {
template <typename T> void foo();
void bar() {
  union {
  } ::foo<int>;
}
} // namespace N
