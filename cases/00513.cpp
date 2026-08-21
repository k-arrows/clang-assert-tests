// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> void foo() {
  class C {
    template <typename U> friend void bar(T);
  };
}

template void foo<int>();
