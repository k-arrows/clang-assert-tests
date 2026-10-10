// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

__interface {
  struct S {};
  constexpr S s() {}
};
