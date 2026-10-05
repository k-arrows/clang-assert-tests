// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EmitAggregateCopy
// EXPECT-CRASH-ASSERT: hasTrivialCopyConstructorForCall
// EXPECT-CRASH-ASSERT: hasTrivialCopyAssignment
// EXPECT-CRASH-ASSERT: hasTrivialMoveConstructorForCall
// EXPECT-CRASH-ASSERT: hasTrivialMoveAssignment
// EXPECT-CRASH-ASSERT: isUnion
// EXPECT-CRASH-ASSERT: getLangOpts
// EXPECT-CRASH-ASSERT: isHLSLBuiltinRecord
// EXPECT-CRASH-ASSERT: aggregate-copy
// EXPECT-CRASH-ASSERT: operator

typedef struct S {
  virtual void foo();
} s;

s bar(int i...) {
  __builtin_va_list list;
  __builtin_va_start(list, i);
  return __builtin_va_arg(list, s);
}
