// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  constexpr const int &temp = 0;
  static_assert(__builtin_is_within_lifetime(&temp));
}
