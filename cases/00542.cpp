// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ClassifyImpl
// EXPECT-CRASH-ASSERT: isLValue

template <class, class> struct S {};

struct s1 {
} constexpr s;

template <class T, class U> struct O {
  using Foo = S<U, T>;
  template <class V> struct I {
    I(s1, V v, Foo foo) {}
  };
};

O<char, int>::I bar(s, 42, __builtin_assume_aligned);
