// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S1;

struct S2 {
  S1 s[2];
};

S2 s = S2();
