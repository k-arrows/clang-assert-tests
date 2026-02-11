// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

class Foo {
public:
  void bar();
};

void baz() { &Foo::bar, Foo(); }
