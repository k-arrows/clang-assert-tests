// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

template <typename T> constexpr void foo(T *t) { t->~T(); }

constexpr bool bar() {
  foo(&"baz"[0]);
  return true;
}

static_assert(bar(), "");
