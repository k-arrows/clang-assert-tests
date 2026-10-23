// RUN: clang++ -c -target aarch64 %s
// EXPECT-CRASH-ASSERT: ActOnFinishFunctionBody
// EXPECT-CRASH-ASSERT: getCurFunctionDecl
// EXPECT-CRASH-ASSERT: parsing

void foo() {
  struct S {
    __attribute__((target_version("fp16"))) void bar() {}
  };
}
