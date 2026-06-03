// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  char L[3];
  int M;
} s[] = {{{"foo"}, 1}, [0].L[2] = 'x'};
