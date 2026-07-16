// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename> struct S {
  template <typename, typename> __forceinline auto var = 1;
  template <typename T> inline auto var<int, T> = 2;
};

int i = S<int>::var<int, int>;
