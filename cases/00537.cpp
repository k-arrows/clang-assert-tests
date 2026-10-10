// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> struct S {};

namespace foo {};

int bar = (void(foo::S<int>));
