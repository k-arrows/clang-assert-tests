// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

struct S {};

struct I {
  S s;
  int n = 42;
};

constexpr void foo(I *i1, I *i2) { *i2 = *i1; }

consteval unsigned bar() {
  I i[]{{{}, 1}};
  foo(i, i + 1);
}

static_assert(bar(), "");
