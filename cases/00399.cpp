// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTypeInfoImpl
// EXPECT-CRASH-ASSERT: getDeducedType
// EXPECT-CRASH-ASSERT: undeduced

void foo() {
  auto *bar = delete;
  delete[] bar;
}
