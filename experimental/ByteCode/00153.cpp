// RUN: clang++ -c -std=c++26 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  constexpr int size() { return sizeof("foo"); }
  constexpr char *data() { return 0; }
};

static_assert(false, S{});
