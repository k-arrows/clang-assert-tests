// RUN: clang++ -c %s
// EXPECT-FAIL

struct S { enum E };

int foo() {
  return E().bar::baz;
}
