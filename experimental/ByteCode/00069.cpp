// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: Length
// EXPECT-CRASH-ASSERT: Invalid

struct {
  _BitInt(35) void : 33;
} s;
