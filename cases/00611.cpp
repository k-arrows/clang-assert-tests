// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getAsTemplate
// EXPECT-CRASH-ASSERT: getKind
// EXPECT-CRASH-ASSERT: Unexpected

#include <type_traits>

template <template <> typename... Args>
concept C = (std::is_integral_v<Args<>> && ...);
template <template <> typename... Args>
void foo()
  requires C<Args...>
{
  foo();
}
