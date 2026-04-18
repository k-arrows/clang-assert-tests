// RUN: clang++ -c -x c %s
// EXPECT-FAIL

#define T(str) strcpy(d, str)

void foo(char *d) {
  T((int){ 0, });
}
