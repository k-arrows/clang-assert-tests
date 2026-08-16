// RUN: clang++ -c %s
// EXPECT-FAIL

template <foo> struct S {
  enum { E };
  template <int = E> class M;
  typedef const M<> &type;
};
