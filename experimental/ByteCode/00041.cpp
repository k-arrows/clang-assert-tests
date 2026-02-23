// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

char z = ((char *)(void *)123) - (char *)0x1000;
