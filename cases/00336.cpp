// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiagnoseMixedUnicodeImplicitConversion
// EXPECT-CRASH-ASSERT: isUnicodeCharacterType
// EXPECT-CRASH-ASSERT: Source
// EXPECT-CRASH-ASSERT: Target

typedef __attribute__((__ext_vector_type__(4))) char32_t vf4;
typedef __attribute__((__ext_vector_type__(4))) int vi4;

vi4 foo(vf4 &V) { return V.xyzw < V.x; }
