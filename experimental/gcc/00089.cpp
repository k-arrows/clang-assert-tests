// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

struct S {
  int x;
  auto L() {
    return [this](this) { return x; };
  }
};
