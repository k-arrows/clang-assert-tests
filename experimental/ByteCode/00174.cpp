// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  constexpr char K[] = {'\0';
  __builtin_verbose_trap("bar", K);
}
}
