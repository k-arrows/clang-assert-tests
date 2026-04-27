// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: toAPSInt
// EXPECT-CRASH-ASSERT: isNumber

int foo = __builtin_bswap64("") == 0x1234 ? 1 : 0;
