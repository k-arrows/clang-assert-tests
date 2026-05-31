// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: collectBaseOffset
// EXPECT-CRASH-ASSERT: getNumBases

struct A {
  constexpr char foo() const { return 'Z'; }
  char c = foo();
};

struct D {};
struct S {
  D d;
  virtual const A *foo() const;
};

struct SS : S {
  constexpr const D *foo() const { return &this->d; }
};

constexpr SS ss;
constexpr const S *s = &ss;
static_assert(s->foo()->c == 'Z');
