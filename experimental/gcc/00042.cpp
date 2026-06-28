// RUN: clang++ -c %s
// EXPECT-FAIL

#include <coroutine>

struct coro {
  struct promise_type {
    int *unhandled_exception, *c;
  };

  coro foo() {
    co_await std::suspend_never{}, []() -> coro { co_return; };
  }
};
