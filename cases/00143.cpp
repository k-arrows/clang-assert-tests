// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-FAIL

struct S {
  enum E e;
};

struct S {
  e;
};
