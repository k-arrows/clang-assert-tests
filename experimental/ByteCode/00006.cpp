// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: peek
// EXPECT-CRASH-ASSERT: toPrimType

class Foo {
public:
  void bar();
};

void baz() { &Foo::bar, Foo(); }
