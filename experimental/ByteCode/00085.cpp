// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: Cannot

char *strcpy(char *dest, const char *src);

struct S {
  char c[4];
  struct SS ss[2];
};

void foo() {
  struct S s;
  strcpy(s.c, "123");
}
