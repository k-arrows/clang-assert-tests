// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT
// SKIP: x86_64, aarch64

template <int D> int f1(size_t x) { return x; }
int f2(int x) { return x; }
template <int... D> int f3(int x) {
  [[clang::always_inline]] return f2(x) + (f1<D>(x) + ...);
}

void g() { f3<0, 1, 2>(0); }
