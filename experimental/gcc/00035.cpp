// RUN: clang++ -c %s
// EXPECT-FAIL

template <int> void foo() {
  for (int i (const S &s) 0; i
}

void bar() { foo<42>(); }
