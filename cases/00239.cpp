// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildCXXDefaultArgExpr
// EXPECT-CRASH-ASSERT: hasDefaultArg
// EXPECT-CRASH-ASSERT: nonexistent

template <class T> using SS = S<T...> struct S {
  template <class... ArgTs> S(ArgTs...) {}
};

S(ArgTs...)->S<typename ArgTs::value_type...> e.f(0);
