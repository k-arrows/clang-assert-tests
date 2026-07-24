// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: GetSignedVectorType
// EXPECT-CRASH-ASSERT: Context.getTypeSize
// EXPECT-CRASH-ASSERT: Unhandled
// SKIP: aarch64

using i512x3 = _BitInt(512) __attribute__((ext_vector_type(3)));

i512x3 foo(i512x3 a) { return a > 42; }
