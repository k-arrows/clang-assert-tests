// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};
enum E { e1, e2 };

template <typename T> auto foo(E = ({ ; }) ? 0 : 1, E = e2) { return 42; }

static_assert(foo<S>(e1) == 42, "");
