// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename> struct S {
  template <typename typename> inline auto foo = 42;
};

int bar = S<int>::foo<int, int>;
