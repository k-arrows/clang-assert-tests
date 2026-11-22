// RUN: clang++ -c -std=c++26 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getCommonPtr
// EXPECT-CRASH-ASSERT: isNull
// EXPECT-CRASH-ASSERT: Cannot

struct A {
  constexpr A() { ; }
};

struct B : virtual A {
  constexpr B(int *i) : A(foo()) {}
};

constexpr int bar(int x) {
  B b(&x);
  return x;
}

static_assert(bar(0), "");
