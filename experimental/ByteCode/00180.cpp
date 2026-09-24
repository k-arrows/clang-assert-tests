// RUN: clang++ -c -std=c++2b -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSource
// EXPECT-CRASH-ASSERT: getCodeBegin
// EXPECT-CRASH-ASSERT: PC

struct M {
  M& operator=(this M&, const M&) = default;
  M& operator=(this M& self, M&& other) {
    return self;
  }
  int val = 42;
};

struct S {
  S& operator=(this S&, const S&) = default;
  M m;
};

constexpr bool foo() {
  S s {
    goto label;
  } ;
  s = s;
  return true;
}

static_assert(foo(), "");
