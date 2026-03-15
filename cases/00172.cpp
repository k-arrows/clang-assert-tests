// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

void foo() {
  struct S {
    struct T *t1;
    struct __attribute__((may_alias)) T *t2;
    struct T *t3;
  };
};
