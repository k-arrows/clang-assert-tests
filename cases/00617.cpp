// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

struct foo;

struct S {
  using iterator_category = foo;
};

void bar() {
#pragma acc loop
  for (S s;;)
    ;
}
