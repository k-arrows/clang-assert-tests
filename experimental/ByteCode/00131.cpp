// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

template <class T> void foo() {
  union {
    T t;
  };
}

struct S {
  ~S();
};
template void foo<S>();
