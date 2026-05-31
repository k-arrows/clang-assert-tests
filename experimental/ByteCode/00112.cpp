// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: isPrimitiveArray

struct B {};
struct A {
  B &b;
};

constexpr void foo() {
  struct S {
    int arr[1024 * 1024 * 1024];
    constexpr S(B &b) {}
  };

  B b;
  S s(b);
}
