// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: CheckArrayInitialized
// EXPECT-CRASH-ASSERT: BaseDesc
// EXPECT-CRASH-ASSERT: isArray

enum E { I };
class C {};
E EV[0xDEADBEEF] = {I};

template <class ENUM, const ENUM *const VAL> struct S {
  template <class E, const E *const V>
  friend C &operator<<(C &c, const S<E, V> &s);
};

void foo() {
  S<E, EV> s;
  C c;
  c << s;
}
