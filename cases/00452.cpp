// RUN: clang++ -std=c++20 %s
// EXPECT-CRASH-NOASSERT

struct S {
  ~S() {}
};

union U {
  S s;
  U :;
};

static_assert(__is_literal(U), "");
