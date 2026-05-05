// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getVectorType
// EXPECT-CRASH-ASSERT: isBuiltinType
// EXPECT-CRASH-ASSERT: isBitIntType
// EXPECT-CRASH-ASSERT: isPowerOf2_32

using V1 = short((ext_vector_type(4)));
using V2 = short __attribute__((__vector_size__(8)));

void foo() {
  V1 v1;
  V2 v2;
  (v2 ? v1 : v1);
}
