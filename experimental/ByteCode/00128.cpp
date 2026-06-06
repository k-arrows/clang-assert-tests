// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: AllocCN
// EXPECT-CRASH-ASSERT: NumElements.isPositive

struct Foo {};
struct Bar {
  int a;
};
const Bar arr[1] = {-1};

void foo(int a) {
  Foo *fa;
  fa = new Foo[arr[0].a];
}
