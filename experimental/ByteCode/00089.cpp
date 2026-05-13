// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  _Accum s[2];
};

S s = S();
