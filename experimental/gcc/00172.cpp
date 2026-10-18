// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  __int128 S() = default;
};
