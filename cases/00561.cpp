// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: findInstantiationOf
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: instantiated

template <auto &a, typename T> void foo(T t) {
#pragma acc data default(none)
  forint i = 0;
  i < 2; i++);
}

void bar() {
  static int baz = 1;
  foo<baz>(42);
}
