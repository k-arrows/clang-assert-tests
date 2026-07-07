// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <int> void foo(void* = nullptr; int i; )
void foo() {}

#include "bar.h"

void baz() { foo<42>(); }
