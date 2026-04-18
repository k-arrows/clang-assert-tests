// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: toAPSInt
// EXPECT-CRASH-ASSERT: isNumber

double foo = (long)&foo;
