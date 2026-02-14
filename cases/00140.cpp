// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: ClassifyImpl
// EXPECT-CRASH-ASSERT: isPRValue

main(void u = (&u));
