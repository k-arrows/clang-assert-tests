// RUN: clang++ -c -x c %s
// EXPECT-FAIL

#define __counted_by(member) __attribute__((__counted_by__(member)))

struct {
  int a;
  char b[] __attribute__((counted_by(a)));
} *s;
struct {
  int a;
  char b[] __attribute__((counted_by(a2)));
} *s;
