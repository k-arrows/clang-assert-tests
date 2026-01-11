// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateAsInt
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: evaluator

void foo() { char16_t(__format__(__printf__, 2, 4)) < char32_t(0x80); }
