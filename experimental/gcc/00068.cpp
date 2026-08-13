// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

void foo() {
  auto f1 = [= pre (i > 0) {};
  auto f2 = [=] pre (i > 0) {};
}
