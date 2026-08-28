// RUN: clang++ -c -x c %s
// EXPECT-FAIL

struct {
  int a;
  char b[] __attribute__((counted_by(a)));
} *s;
struct {
  int a;
  char b[] __attribute__((counted_by(a2)));
} *s;
