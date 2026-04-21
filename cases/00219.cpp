// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: size
// EXPECT-CRASH-ASSERT: Out-of-bounds

template <class, class> struct S {};
struct t_1 {
} t1;

template <class T, class U> struct O {
  template <class V> using T2 = S<O, T>;
  template <class V> struct I {
    I(t_1, V v, T2<V> t2) {}
  };
};

S<int, char> s;
O<char, int>::I _1(t1, 42, s);
