// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getArg
// EXPECT-CRASH-ASSERT: NumArgs
// EXPECT-CRASH-ASSERT: access

template <int J>
int *__attribute__((address_space[](J))) __attribute__((address_space(J))) * Z;
