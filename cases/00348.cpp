// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

typedef __attribute__((ext_vector_type(2))) double d2;

template <typename T> struct S {
  void foo(T *t) { t->operator=; }
};

template struct S<d2>;
