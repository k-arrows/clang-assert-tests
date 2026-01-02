// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: addUnsizedArray
// EXPECT-CRASH-ASSERT: getNonReferenceType
// EXPECT-CRASH-ASSERT: isPointerType
// EXPECT-CRASH-ASSERT: isArrayType

long b[123.4];
_BitInt(567) b[];

void foo() { b[8] = 9; }
