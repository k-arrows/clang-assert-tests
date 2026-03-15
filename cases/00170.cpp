// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: isOnePastTheEnd
// EXPECT-CRASH-ASSERT: Invalid

consteval bool foo() {
  int arr[2];
  if (!__builtin_is_within_lifetime(&arr[-1]))
    return false;
  return true;
}

static_assert(foo());
