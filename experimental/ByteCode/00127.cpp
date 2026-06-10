// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  int &&temp;
  int x;
};
const S &s = {42, ++s.temp};
