// RUN: clang++ -c %s
// EXPECT-FAIL

namespace N {
  template <class T> struct foo {};
  template <class T> ::~foo<T> {};
};
