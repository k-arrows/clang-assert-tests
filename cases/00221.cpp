// RUN: clang++ -c %s
// EXPECT-FAIL

template <int J>
int *__attribute__((address_space[](J))) __attribute__((address_space(J))) * Z;
