// RUN: clang++ -c %s
// EXPECT-FAIL

#include <coroutine>

struct S {
  struct promise_type {};
};

S s(struct foo) { co_return; }
