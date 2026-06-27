// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <class T> struct S {
  template <typename... Ts> S(typename T::U<Ts>... ts);
};

struct H {};
S<H> h;
