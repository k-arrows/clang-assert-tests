// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: getCXXBaseObjectRegion
// EXPECT-CRASH-ASSERT: isValidBaseClass

void foo(bool);

struct B {
  int f;
};

struct D : public B {};
struct DD : public D {};

void bar() {
  int DD::*ddf = &B::f;
  int B::*bf = reinterpret_cast<int B::*>(
      reinterpret_cast<int D::*>(reinterpret_cast<int B::*>(ddf)));
  B b;
  b.f = 42;
  foo(b.*bf == 42);
}
