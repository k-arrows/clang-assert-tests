// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct {
  int a[1 << 30];
} s;
