// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: Cannot

struct S {
  S();
};

template <typename T> void F(S &, T...);

struct SS {
  template <typename T> SS(T &val) { __builtin_dump_struct(&val, F, s); }
  S s;
};

template <typename T> S foo(const T &t) { return SS(t).s; }

struct A {
  S s;
};

struct B : A;

static_assert(foo(B{1, 2, 3}), "");
