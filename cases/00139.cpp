// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getTypeInfoImpl
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: should

template <class T> int i;

template <class T, T> struct S {
  S(T);
};

template <class T> using SS = S<T, i<T>>;
SS s{42};
