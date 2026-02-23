// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckLoopHintExpr
// EXPECT-CRASH-ASSERT: Invalid

struct S {};

template <class T> void foo(T t) {
  auto L = [](auto N) {
#pragma clang loop unroll_count(N + 1)
    for (int i = 0; i < 10; ++i) {
    }
  };
  L(t);
}

void bar() { foo(S()); }
