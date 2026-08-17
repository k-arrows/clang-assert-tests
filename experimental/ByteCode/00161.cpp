// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  int a = 42, b = b;
};

struct SS : S {};

SS ss{};
