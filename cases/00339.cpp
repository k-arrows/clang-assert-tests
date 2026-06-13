// RUN: clang++ -c %s
// EXPECT-FAIL

template <int> void foo(void* = nullptr; int i; )
void foo() {}

#include "bar.h"

void baz() { foo<42>(); }
