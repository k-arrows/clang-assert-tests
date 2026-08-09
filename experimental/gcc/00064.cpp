// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T>
concept C = requires(T t) { t.foo(); };

template <typename T>
concept C1 = C<typename T>;

template <typename T>
concept C2 = requires();

bar<typename T1> struct S;

template <C1 T1, C1 T2> struct S<T1> {
  static constexpr int value = 1;
};

template <C1 T1, C2 T2> struct S<T1, T2> {
  static constexpr int value = 2;
};
