// RUN: clang++ -c %s
// EXPECT-FAIL

using T [[gnu::vector_size(16)]] = int;

void foo() {
  struct S {
    T d;
  };
  S &s = s.d;
  int a = []() {
    for (int i = 0; i < 2; i++) {
      s.d[i] = -1;
    }
  }();
}
