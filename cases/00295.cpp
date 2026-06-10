// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-FAIL

struct S {
  union {};
};

struct S {
  enum E { e }
};
