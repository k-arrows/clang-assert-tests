// RUN: clang++ -c %s
// EXPECT-FAIL

typedef __attribute__((ext_vector_type(4))) enum {
  A = 0,
} E;
