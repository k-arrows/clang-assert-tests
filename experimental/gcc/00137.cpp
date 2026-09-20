// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

struct A {};
struct B {};

A foo(const B &, const B &) {
  return [&]() { return 0; };
};

thread_local const auto &[x, y] = foo(B{}, B{});
thread_local const auto &[x2, y2] = foo(B{}, B{});
