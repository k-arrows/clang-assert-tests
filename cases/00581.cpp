// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: mergeErrorAttr
// EXPECT-CRASH-ASSERT: NewAttr
// EXPECT-CRASH-ASSERT: normalized

template <class T> T foo(T t) {
  [[gnu::warning("")]] void bar();
  return T();
}

int baz(int i, float f) { return foo(i) + foo(f); }
