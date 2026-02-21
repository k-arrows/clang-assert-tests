// RUN: clang++ -c %s
// EXPECT-FAIL

#include <foo>

namespace N {}
bar;

template <class T> N::T::bar;
