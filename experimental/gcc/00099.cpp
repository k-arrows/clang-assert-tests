// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

template <typename F> void foo(F &&f) {}

void bar() {
    ([&] (auto struct A
{
  A () { foo (); }
}
    ))
}
