// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: visitLocalsRetainedByInitializer
// EXPECT-CRASH-ASSERT: isAggregate
// EXPECT-CRASH-ASSERT: non-aggregate

#include <utility>

void foo() {
  struct S {
    std::pair<int, double> foo;
    int bar[];
    constexpr S(int);
  } constexpr bar[]{[0].foo{}};
  int baz = bar[1].bar[2];
}
