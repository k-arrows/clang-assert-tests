// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-FAIL

#embed <foo> limit(defined(bar)),
