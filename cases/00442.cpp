// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

void foo() { int res = s->i; }

static int bar = foo();
template <int N> struct SS {};
void baz(SS<bar>) {}
