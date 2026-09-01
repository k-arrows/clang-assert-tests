// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  friend([] {})();
};
