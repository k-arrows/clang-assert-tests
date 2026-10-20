// RUN: clang++ -c %s
// EXPECT-FAIL

void foo() {
  [](auto) noexcept(requires() { 0; })
    requires(int t)
  {}
}
