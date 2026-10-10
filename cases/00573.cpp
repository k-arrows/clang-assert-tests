// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getExtVectorType
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: isBuiltinType
// EXPECT-CRASH-ASSERT: isBitIntType
// EXPECT-CRASH-ASSERT: isPowerOf2_32

short __attribute__((ext_vector_type(4))) foo;

void bar() { foo ? 0 : (_Complex double)42; }
