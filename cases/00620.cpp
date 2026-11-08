// RUN: clang++ -c -std=gnu++17 -fms-compatibility %s
// EXPECT-CRASH-ASSERT: getLValueReferenceType
// EXPECT-CRASH-ASSERT: isPlaceholderType
// EXPECT-CRASH-ASSERT: isSpecificPlaceholderType
// EXPECT-CRASH-ASSERT: Unresolved

#include <tuple>

struct S {
  __declspec(property()) void m;
  void foo() { std::tuple(m) }
};
