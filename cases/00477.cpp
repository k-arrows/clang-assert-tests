// RUN: clang++ -c -fms-compatibility %s
// EXPECT-FAIL

struct S {};

struct SS : S {
  ::__super::;
};
