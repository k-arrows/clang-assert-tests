// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getFloat
// EXPECT-CRASH-ASSERT: isFloat
// EXPECT-CRASH-ASSERT: accessor

template <typename T, typename U> struct S {
  static constexpr T t = 0;
  static constexpr U u = __builtin_choose_expr(sizeof(T) == sizeof(U), t, u);
};

template struct S<int, double>;
