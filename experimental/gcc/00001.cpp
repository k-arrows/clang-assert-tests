// RUN: clang++ -c %s
// EXPECT-FAIL

class C {
public:
  consteval C(int);
};

struct T {
  C val;
  template <class A = int> constexpr T(int arg) : val(arg) {}
};

struct S : T {
  using T::T;
};

S s(0);
