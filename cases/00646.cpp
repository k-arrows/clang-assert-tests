// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: defineDefaultedFunctionWithSynthesizedBody
// EXPECT-CRASH-ASSERT: isDefaulted
// EXPECT-CRASH-ASSERT: isDeleted
// EXPECT-CRASH-ASSERT: doesThisDeclarationHaveABody

#include <iostream>

template <typename> struct F {
  struct {
  } I;
  std::strong_ordering operator<=>(const F &) const;
};

template <typename T>
std::strong_ordering F<T>::operator<=>(const F &) const = default;
F<std::pair<int, double>> foo;
F<std::pair<int, double>> bar{foo < bar};
