// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DynamicCast
// EXPECT-CRASH-ASSERT: LimitedPtr

struct A {
  virtual void foo();
};
struct B : A {};
struct C : A {};
struct D : B {};

constexpr D d;
constexpr A &a = (B &)d;
constexpr auto p = dynamic_cast<C &>(a);
