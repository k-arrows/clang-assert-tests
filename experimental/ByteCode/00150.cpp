// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getInlineDesc
// EXPECT-CRASH-ASSERT: GlobalInlineDescriptor

struct A {
  virtual void foo();
};
struct B1 : A {};
struct B2 : A {};
struct C : B2 {};

constexpr C c;
static_assert(&dynamic_cast<B2 &>((B1 &)c), "");
