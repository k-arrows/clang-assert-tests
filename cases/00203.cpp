// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getCorrespondingSignedType
// EXPECT-CRASH-ASSERT: hasSignedIntegerRepresentation
// EXPECT-CRASH-ASSERT: Unexpected

__builtin_va_list ap;

void foo() {
  enum E : char16_t {};
  (void)__builtin_va_arg(ap, E);
}
