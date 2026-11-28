// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getExtVectorType
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: isBuiltinType
// EXPECT-CRASH-ASSERT: isBitIntType
// EXPECT-CRASH-ASSERT: isPowerOf2_32

typedef int v8i __attribute__((ext_vector_type(8)));
typedef _Bool v8b __attribute__((ext_vector_type(8)));

void foo(v8b mask, v8i idx, const int *ptr) {
  __builtin_masked_gather(mask, idx, (int **)ptr);
}
