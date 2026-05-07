// RUN: clang++ -c %s
// EXPECT-FAIL

consteval int foo(int bar) {
    return baz;
}

struct S {
    int i;
    int j = foo(i);
};

S s(0);
