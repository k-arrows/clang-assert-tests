// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: back
// EXPECT-CRASH-ASSERT: empty

[[gnu::format(printf, 1, 17)]]
int vprintf(const char *, __builtin_va_list);

void foo() {
  __builtin_va_list args;
  vprintf("test", args);
}
