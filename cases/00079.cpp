// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: PerformImplicitConversion
// EXPECT-CRASH-ASSERT: isFixed
// EXPECT-CRASH-ASSERT: ICK_Integral_Promotion
// EXPECT-CRASH-ASSERT: enums

extern enum Values x;

void foo() {
  if (x)
    x->~T();
}
