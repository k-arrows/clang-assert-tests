// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

#include <source_location>

using SL = std::source_location;

struct A {
  constexpr A() {};
  int a;
  SL info = SL::current();
};

struct B {
  A a;
};

constexpr B b = {};
static_assert(b.a.info.line() == 123, "");
