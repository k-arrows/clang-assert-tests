// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getExtVectorType
// EXPECT-CRASH-ASSERT: isBuiltinType
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: isBitIntType

typedef __attribute__((ext_vector_type(4))) enum {
  A = 0,
} E;
