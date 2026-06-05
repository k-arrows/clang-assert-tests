// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

struct E {
  operator int() const;
};

template <class T> void foo() {
  T t;
#pragma acc shutdown device_num(T::e)
}

struct H {
  static _Atomic E e;
};

void bar() { foo<H>(); }
