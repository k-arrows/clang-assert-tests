// RUN: clang++ -c %s
// EXPECT-PASS

typedef struct {
  struct S;
} s;
