// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deref
// EXPECT-CRASH-ASSERT: getAllocSize

class C {
public:
  int x = 42;
};

struct T {
  C val;
  template <class A = int> constexpr T(int arg) : val(arg) {}
};

struct S : T {};

S s(0);
