// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: evaluateVarDeclInit
// EXPECT-CRASH-ASSERT: mightBeUsableInConstantExpressions

extern const char (&Str)[];
int foo() __attribute((enable_if(__builtin_strlen(Str), ""))) {
  return __builtin_strlen(Str);
}

const char (&Str)[] = bar();
int x = foo();
