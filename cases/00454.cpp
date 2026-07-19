// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: declarations

template <typename T> void foo() {
  struct A struct B {
    struct C : A {
      int k = __alignof__(k);
    };
  }
}
