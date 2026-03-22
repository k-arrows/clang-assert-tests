// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: processEndOfFunction
// EXPECT-CRASH-ASSERT: TemporaryDestructorKind
// EXPECT-CRASH-ASSERT: ElidedDestructorKind

int foo();

struct S {};

void bar(S, int);

void baz() {
  bar(S(), ({
        if (foo())
          return;
        0;
      }));
}
