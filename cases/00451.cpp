// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: VisitFunctionDecl
// EXPECT-CRASH-ASSERT: getDeclContext

void foo() {
  template for (auto x : {1, 2}) {
    template for (auto x : {1, 2}) { void bar(); }
  }
}
