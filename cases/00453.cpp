// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: ActOnFinishSwitchStmt
// EXPECT-CRASH-ASSERT: getCurFunction
// EXPECT-CRASH-ASSERT: missing

void foo(int i) {
  switch (i) {
    template for (auto x : {1, 2}) {
      switch (i) { bar baz(); }
    }
  }
}
