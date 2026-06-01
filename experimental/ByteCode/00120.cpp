// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitDesignatedInitUpdateExpr
// EXPECT-CRASH-ASSERT: isRecordType

struct S {
  char L[3];
  int M;
} s[] = {{{"foo"}, 1}, [0].L[2] = 'x'};
