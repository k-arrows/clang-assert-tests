// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: discard
// EXPECT-CRASH-ASSERT: toPrimType

namespace ConstexprVirtualDispatch {
class A {
public:
  constexpr virtual void foo(int &a, ...) { a = 1; }
};

class B : public A {
public:
    constexpr void foo(int &a, ... override {
    a = 2;
    };
};

constexpr int foo() {
  B b;
  int a;
  b.foo(a, 1, 2, nullptr);
  return a;
}
static_assert(foo() == 2, "");
} // namespace ConstexprVirtualDispatch
