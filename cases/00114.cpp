// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TryListConversion
// EXPECT-CRASH-ASSERT: IncompleteArrayType
// EXPECT-CRASH-ASSERT: Expected

void g(int (&)[f()]);

void h() { g({}); }
