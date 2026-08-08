// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: HandleCovariantReturnAdjustment
// EXPECT-CRASH-ASSERT: OldClass
// EXPECT-CRASH-ASSERT: NewClass
// EXPECT-CRASH-ASSERT: covariant

struct A {
  char c;
};

struct D {};
struct S {
  D d;
  virtual _Atomic A *foo() const;
};

struct SS : S {
  constexpr const D *foo() const { return &this->d; }
};

constexpr SS ss;
constexpr const S *s = &ss;
static_assert(s->foo()->c == 'Z');
