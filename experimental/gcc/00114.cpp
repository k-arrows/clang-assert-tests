// RUN: clang++ -c -std=c++11 %s
// EXPECT-PASS

constexpr int foo() {
  return ({
    int i = 0;
    i;
  });
}
