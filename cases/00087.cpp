// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> void foo(T x) {
  struct S {
    static int *s;
  };
  int *S::s = 0;
}

void bar() { foo(0); }
