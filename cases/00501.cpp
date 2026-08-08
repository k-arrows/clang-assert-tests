// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: findSubobject
// EXPECT-CRASH-ASSERT: isComplexFloat

constexpr bool foo(double x) {
  __complex__ double d;
  __real__ d = x;
  return true;
}

bool bar() { return foo(42.); }
