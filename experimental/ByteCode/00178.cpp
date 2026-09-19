// RUN: clang++ -c -std=c++2c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getOffset
// EXPECT-CRASH-ASSERT: PastEndMark

constexpr const char foo[] = {};

struct S {
  constexpr int size() const { return 4; }
  constexpr const char *data() const { return foo; }
};

static_assert(false, S{});
