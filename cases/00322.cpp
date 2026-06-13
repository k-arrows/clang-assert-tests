// RUN: clang++ -c -fopenacc %s
// EXPECT-PASS

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
