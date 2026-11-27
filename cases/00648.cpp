// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getFirstCoroutineStmtKeyword
// EXPECT-CRASH-ASSERT: FirstCoroutineStmtLoc
// EXPECT-CRASH-ASSERT: available

#include <coroutine>

struct S {
  struct promise_type {
    void get_return_object();
    auto initial_suspend() { return std::suspend_never{}; }
    auto final_suspend() noexcept { return std::suspend_never{}; }
    void unhandled_exception() {}
  };
};

template <typename... T> auto foo(T... args) -> S { co_yield args; }

S s = foo();
