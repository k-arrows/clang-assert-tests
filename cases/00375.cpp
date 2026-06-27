// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

struct S {};

template <class T, S (*F)(T)> S foo(T t) { return F; }

S id(int x) { return S(); }

void bar() { foo<int, foo<int, id>>(42); }
