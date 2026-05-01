// RUN: clang++ -c -std=c++23 %s
// EXPECT-CRASH-ASSERT: addCallStack
// EXPECT-CRASH-ASSERT: CallRange.isValid

struct S {
  constexpr int foo() {}
};

static_assert([]() {
  S s;
  if (__builtin_invoke(&S::foo, s))
    return false;
  return true;
}());
