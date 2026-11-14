// RUN: clang++ -c -std=c++20 %s
// EXPECT-PASS

union A {
  bool operator==(const A &) const = default;
};

bool foo() { return A() == A(); }
