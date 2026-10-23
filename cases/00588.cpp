// RUN: clang++ -c -target aarch64 %s
// EXPECT-CRASH-ASSERT: getExtValue
// EXPECT-CRASH-ASSERT: isRepresentableByInt64
// EXPECT-CRASH-ASSERT: int64_t

int i = foo<int *__ptrauth(1, 18446744073709551615, 123)>();
