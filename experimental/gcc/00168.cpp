// RUN: clang++ -c -std=c++26 %s
// EXPECT-PASS

typedef __INTPTR_TYPE__ intptr_t;

template <typename T> void foo(T n) {
  intptr_t buf[n];
  [&buf]() { __typeof(buf) baz; }();
}

void bar() { foo(42); }
