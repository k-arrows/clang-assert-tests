// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  i mutable friend f();
};
