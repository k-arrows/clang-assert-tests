// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSize
// EXPECT-CRASH-ASSERT: isUnknownSizeArray

void foo() {
  constexpr char K[] = {'\0';
  __builtin_verbose_trap("bar", K);
}
}
