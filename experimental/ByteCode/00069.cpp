// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct {
  _BitInt(35) void : 33;
} s;
