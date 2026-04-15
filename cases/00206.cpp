// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

struct S {
  typename T;
};

template <typename T> void foo() {
#pragma acc loop collapse(T{})
}

void bar() { foo<S>(); }
