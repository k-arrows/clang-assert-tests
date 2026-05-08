// RUN: clang++ -c %s
// EXPECT-FAIL

namespace std {
template <class P = void> struct coroutine_handle;

template <> struct coroutine_handle<void> {
  void *address() const;
};

template <class ::E, class... Args> struct coroutine_traits {};
} // namespace std

struct S {
} s;

void foo() { co_await s; }
