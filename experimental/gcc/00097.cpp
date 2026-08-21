// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

typedef struct {
  int p[2147483647];
  int q[42];
} S;

void foo() {
  S in, out;
  S(SS)(S);
  out = SS(in);
}
