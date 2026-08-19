// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> class C;
template <int N> C<int> A{};

template <typename T> struct D {
  typedef A<__direct_bases(T)...> B;
};
