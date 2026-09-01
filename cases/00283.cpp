// RUN: clang++ -c -std=c++2c %s
// EXPECT-FAIL

template <template <typename...> concept C> struct S {
  template <auto foo()->C auto> void bar();
};
