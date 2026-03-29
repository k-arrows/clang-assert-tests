// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckVectorConditionalTypes
// EXPECT-CRASH-ASSERT: isNull
// EXPECT-CRASH-ASSERT: isVectorType
// EXPECT-CRASH-ASSERT: isSizelessVectorType
// EXPECT-CRASH-ASSERT: isExtVectorType
// EXPECT-CRASH-ASSERT: should

int __attribute__((ext_vector_type(8))) v1;
unsigned __attribute__((__vector_size__(16))) v2;

void foo() { (void)(v1 ? v2 : 3.0f); }
