// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> struct S {
  S<T> &operator=(const S<T> &s) {
    operator= s;
    return *this;
  }
};
