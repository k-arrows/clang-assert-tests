// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

void foo() {
  [] {
    struct {
      void bar(int & = "") {}
    };
  }
}
