// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: IsArmStreamingFunction
// EXPECT-CRASH-ASSERT: getType
// EXPECT-CRASH-ASSERT: FunctionDecl

template <typename... Args> void foo(Args... args) {
  auto c = []() -> decltype(({
#pragma omp target parallel for
    for (int i = 0; i < 2; i++)
      ;
  })) {};
}
