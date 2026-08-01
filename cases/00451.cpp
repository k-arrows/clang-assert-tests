// RUN: clang++ -c -std=c++26 %s
// EXPECT-PASS

void foo() {
  template for (auto x : {1, 2}) {
    template for (auto x : {1, 2}) { void bar(); }
  }
}
