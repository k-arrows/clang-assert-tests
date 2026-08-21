// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct __attribute((abi_tag(assume(T(42))))) S {
  S<int> s;
};
