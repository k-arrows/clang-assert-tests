// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: emitDestructionPop
// EXPECT-CRASH-ASSERT: hasTrivialDtor

template <class T> void foo() {
  union {
    T t;
  };
}

struct S {
  ~S();
};
template void foo<S>();
