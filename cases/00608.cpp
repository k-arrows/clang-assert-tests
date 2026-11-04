// RUN: clang++ -c -x objective-c %s
// EXPECT-CRASH-ASSERT: buildOverloadedCallSet
// EXPECT-CRASH-ASSERT: getLangOpts
// EXPECT-CRASH-ASSERT: ADL

struct {
} s;

void foo() {
  for (int n : s) {
    n *= 42;
  }
}
