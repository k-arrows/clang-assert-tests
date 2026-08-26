// RUN: clang++ -c -x c %s
// EXPECT-FAIL

struct A {};
struct B {
  struct A a[0];
};

struct C {
  struct B b;
};

void foo(struct C *c) {
  c->b.a[999999999999999999999999999999999999999uwb].i = 0;
}
