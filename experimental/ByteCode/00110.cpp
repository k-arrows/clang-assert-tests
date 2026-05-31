// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {};
using State = S[2];

constexpr unsigned run(const State *s) {
  void *p = operator new(128);
  p = operator new[](128);
  operator delete[](p);
  return 42;
};

constexpr State s[] = {};
static_assert(run(s) == 42, "");
