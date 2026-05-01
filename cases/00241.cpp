// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CreateOverloadedBinOp
// EXPECT-CRASH-ASSERT: isInvalid
// EXPECT-CRASH-ASSERT: candidates

enum { E };

typedef unsigned vec16 __attribute__((vector_size(16)));

void foo(vec16 *v) { *v << (E)v; }
