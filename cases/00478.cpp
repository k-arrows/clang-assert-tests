// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: EvaluateStmt
// EXPECT-CRASH-ASSERT: getInstantiations
// EXPECT-CRASH-ASSERT: expanded

template <typename T> constexpr int bar() {
  int x = 5;
  int sum = 0;
  template for (int i : foo((T &)x)) { sum += x; }
  return sum + x;
}

static_assert(baz<int>(), "");
