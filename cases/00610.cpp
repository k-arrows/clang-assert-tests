// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: SubstTemplateTypeParmPackType
// EXPECT-CRASH-ASSERT: getNumArgs
// EXPECT-CRASH-ASSERT: overwritten
// EXPECT-CRASH-ASSERT: NumSubstPackTypeBits

#include <iostream>
template <typename... Args> struct R {
  using type = std::conditional<sizeof... Args, std::tuple<>,
                                typename R<Args..., Args...>::type>;
};

template <typename... Args> void foo(Args...) { R<Args...> type; }
bar{foo(stdin)};
