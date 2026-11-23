// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: Length
// EXPECT-CRASH-ASSERT: Invalid

void foo() {
  void bar(int arg, const char *format, ...)
      __attribute__((__sentinel__(0xFFFFFFFF)));
  bar(1, "%s", 4);
}
