// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

constexpr bool foo() {
  S s;
  s.*bar();
}

static_assert(foo(), "");
