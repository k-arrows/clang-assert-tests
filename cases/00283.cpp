// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: cast_if_present
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

template <template <typename...> concept C> struct S {
  template <auto foo()->C auto> void bar();
};
