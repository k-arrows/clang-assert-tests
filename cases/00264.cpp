// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: IsAtLeastAsConstrained
// EXPECT-CRASH-ASSERT: IsExpectedEntity
// EXPECT-CRASH-ASSERT: FD2
// EXPECT-CRASH-ASSERT: non-instantiated
// EXPECT-CRASH-ASSERT: ordering

class X {};
class Y {};
X operator+(X, X);

namespace A {
template <typename T> T f(T t) {
  T operator+(T, T);
  return t + t;
}
} // namespace A

void f(X x, Y y) { A::f(x); }
