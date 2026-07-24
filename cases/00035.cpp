// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {
  friend T::U::~foo();
};

struct U {};

S<U> e;
