// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: PushDeclContext
// EXPECT-CRASH-ASSERT: getLexicalParent
// EXPECT-CRASH-ASSERT: lexically

void foo(void) {
  struct S {
    union U {
      typeof(({
        union {
          int b __attribute__((guarded_by(lock)));
        };
        (int *)(0);
      })) __val;
    } u;
  };
}
