// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: SetInvalid
// EXPECT-CRASH-ASSERT: isValid
// EXPECT-CRASH-ASSERT: Must

struct S { enum E };

int foo() {
  return E().bar::baz;
}
