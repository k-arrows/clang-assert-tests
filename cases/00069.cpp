// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckFormatArguments
// EXPECT-CRASH-ASSERT: ArgIdx
// EXPECT-CRASH-ASSERT: bounds

typedef __builtin_va_list va_list;

[[gnu::format(printf, 1, 0x03C0)]]
int vprintf(const char *, va_list);

void foo() {
  va_list args;
  vprintf("bar", args);
}
