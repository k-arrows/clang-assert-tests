// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr const char foo[] = {bar};

struct S {
  constexpr int size() const { return 4; }
  constexpr const char *data() const { return foo; }
};

static_assert(false, S{});
