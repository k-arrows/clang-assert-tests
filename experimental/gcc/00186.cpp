// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  union {
    int : i;
  };
};

template <auto p> void foo() {}

void bar() { foo<S{42}>(); }
