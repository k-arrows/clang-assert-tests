// RUN: clang++ -c -std=c++2c %s
// EXPECT-PASS

void foo() {
  template for (constexpr auto x : {true, false}) {
    struct A {};
    struct B : A {
      B();
    };
    B();
  }
}
