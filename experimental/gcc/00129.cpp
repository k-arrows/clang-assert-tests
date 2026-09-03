// RUN: clang++ -c %s
// EXPECT-FAIL

#include <coroutine>

struct T {};
template<typename T> struct S {};

T foo(__thread) {
  co_await S<int&>{};
}
