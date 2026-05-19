// RUN: clang++ -c -std=c++20 %s
// EXPECT-PASS

struct S {
  short operator<=>(int);
};

template <class T> void foo() {
  S s;
  (void)(s < 0);
}
