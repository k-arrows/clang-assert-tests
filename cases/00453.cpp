// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

void foo(int i) {
  switch (i) {
    template for (auto x : {1, 2}) {
      switch (i) { bar baz(); }
    }
  }
}
