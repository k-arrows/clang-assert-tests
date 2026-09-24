// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: view
// EXPECT-CRASH-ASSERT: isBlockPointer

template <typename T> constexpr void foo(T *t) { t->~T(); }

constexpr bool bar() {
  foo(&"baz"[0]);
  return true;
}

static_assert(bar(), "");
