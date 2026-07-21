// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: IntegerLiteral
// EXPECT-CRASH-ASSERT: isIntegerType
// EXPECT-CRASH-ASSERT: Illegal

struct S {
  decltype(nullptr) x;
  S &operator*=(S &s);
};

template <typename T> void foo() {
  T t;
#pragma acc parallel reduction(* : t)
  ;
}

void bar() { foo<S>(); }
