// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> T foo = T();

class A {
  template <typename T> static T *foo<T *> = T();
};
