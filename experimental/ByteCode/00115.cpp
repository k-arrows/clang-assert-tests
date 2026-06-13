// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct B {};
struct M1 {
  int foo[3];
};
struct M3 : M2 {
  char bar[3];
};
struct M4 {
  int baz[3];
};
struct M5 : M4, M3 {
  char qux[3];
};
struct S : M1, M5 {
  bool d;
};

constexpr S s = {};
constexpr M5 *m5 = (M5 *)((B *)&s);

static_assert(m5->qux[0] == 0);
