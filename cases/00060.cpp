// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getFileIDLoaded
// EXPECT-CRASH-ASSERT: SLocOffset

#define T(str) strcpy(d, str)

void foo(char *d) {
  T((int){ 0, });
}
