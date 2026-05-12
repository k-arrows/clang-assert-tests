// RUN: clang++ -c %s
// EXPECT-FAIL

constexpr bool foo() {
  struct U {
    struct S {};
    static constexpr S S::bar{42};
  }
}
