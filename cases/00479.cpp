// RUN: clang++ -c -fms-compatibility %s
// EXPECT-FAIL

void foo() {
  [] {
    struct {
      void bar(int & = "") {}
    };
  }
}
