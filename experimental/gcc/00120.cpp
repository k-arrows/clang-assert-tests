// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-PASS

void foo(enum E{e = 1}) {
  enum E { e = 1 };
}
