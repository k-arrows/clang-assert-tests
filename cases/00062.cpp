// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getElementOffset
// EXPECT-CRASH-ASSERT: NumElements
// EXPECT-CRASH-ASSERT: Invalid

struct S {};
typedef _Atomic struct S T;

void foo() {
  T x = (struct S){};
  bar(x = (struct S){});
}
