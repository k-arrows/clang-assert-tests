// RUN: clang++ -c -std=c++23 %s
// EXPECT-CRASH-NOASSERT

void foo() {
  noexcept(({
    if consteval {
    }
  }));
}
