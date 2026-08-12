// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

#define vector(elcount, type)                                                  \
  __attribute__((vector_size((elcount) * sizeof(type)))) type

void foo() { vector(0xffffffff, char) v[]; }
