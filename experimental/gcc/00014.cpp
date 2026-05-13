// RUN: clang++ -c -O1 %s
// EXPECT-FAIL

void foo() {
  auto L = [](auto A, auto... As) {
    return [](decltype(bar)... As, decltype(A) a) { return 42; };
  };
  auto M = L.operator()<bool, float>(false, 3.14);
  M(1.23, "abc");
}
