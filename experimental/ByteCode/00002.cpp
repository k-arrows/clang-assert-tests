// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() {
  (1.f / (2.f + 3i), 4.f);
}
