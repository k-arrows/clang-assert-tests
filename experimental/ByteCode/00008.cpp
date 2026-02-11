// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

constexpr void foo() {
  int i = 0;
  do {
    i = i + 1;
    if (i == 4)
      break;
  } while (i / 2i, 3i);
}
