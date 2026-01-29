// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTypeDeclType
// EXPECT-CRASH-ASSERT: Qualifier

#include <foo>

namespace N {}
bar;

template <class T> N::T::bar;
