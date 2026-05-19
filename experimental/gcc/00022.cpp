// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  short operator<=>(int);
};

template <class T> void foo() {
  S s;
  (void)(s < 0);
}
