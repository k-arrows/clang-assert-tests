// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: data
// EXPECT-CRASH-ASSERT: DD
// EXPECT-CRASH-ASSERT: queried

struct foo;

struct S {
  using iterator_category = foo;
};

void bar() {
#pragma acc loop
  for (S s;;)
    ;
}
