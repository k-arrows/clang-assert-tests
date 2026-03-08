// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: getArrayInitializedElts
// EXPECT-CRASH-ASSERT: isArray
// EXPECT-CRASH-ASSERT: Invalid

using size_t = decltype(sizeof(0));

void *operator new(size_t, void *p) { return p; }

consteval int foo() {
  int i[2];
  new (&i) int[;
  return 0;
}

int j = foo();
