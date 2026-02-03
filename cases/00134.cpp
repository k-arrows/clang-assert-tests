// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getScalarVal
// EXPECT-CRASH-ASSERT: isScalar
// EXPECT-CRASH-ASSERT: Not

_Complex double foo();

typedef int vec __attribute__((vector_size(16)));

vec i;

void bar() { 0 * foo() + i; }
