// RUN: clang++ -c -std=c++20 -fms-compatibility %s
// EXPECT-CRASH-ASSERT: buildParameterMapping
// EXPECT-CRASH-ASSERT: Arg
// EXPECT-CRASH-ASSERT: default

struct S;
template <typename = int, typename T1, typename T2>
concept ConstraintT = true;

template <typename T> struct P {
  template <typename U, ConstraintT<T, U>> struct CT {};
  CT<S, S> CI;
};

P<int> p;
