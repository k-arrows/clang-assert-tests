// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

struct S {
  int a = 42, b = b;
};

struct SS : S {};

SS ss{};
